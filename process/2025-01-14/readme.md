# 2025-01-14

## Arduino code for the final prototype

```arduino
#include <Servo.h>
#include <math.h>  // RMS 계산에 필요

// 서보모터 객체 선언
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

Servo* servos[] = {&servo1, &servo2, &servo3, &servo4};

// 서보모터 핀 설정
const int servoPin1 = 12;
const int servoPin2 = 13;
const int servoPin3 = 9;
const int servoPin4 = 8;
const int MicPin = A0;
const int trigPin = 6;
const int echoPin = 5;

float duration_us, distance_cm;

#define SAMPLES 128  // 샘플 개수
int samples[SAMPLES];
bool isMoving = false;  // 로봇이 움직이는 동안 센서 입력 차단

// function pointer to the current movementPattern function
void (*movementPattern)(float) = nullptr;
unsigned long movementStartMs = 0;
int speed = 0;


void setup() {

  // 서보모터 핀 연결
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);

  // 초기 각도 설정
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(115200);  // 시리얼 통신 초기화
}

void loop() {

  // If there is no movement running, read the sensors
  if (movementPattern == nullptr) {  // 로봇이 움직이는 동안 센서 입력 차단

    // 초음파 센서로 거리 측정 / Measuring distance with ultrasonic sensors
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration_us = pulseIn(echoPin, HIGH);
    distance_cm = duration_us * 0.034 / 2;

    // 사운드 센서 값 측정
    float rmsValue = getSoundLevel();

    Serial.print("Distance:");
    Serial.print(distance_cm);
    Serial.print("\t");
    Serial.print("Sound Level:");
    Serial.println(rmsValue);

    // 조건에 따라 움직임 트리거
    if (distance_cm > 60 || distance_cm == 0) {
      stopAllServos();
      return;
    }

    if (rmsValue <= 130) {
      stopAllServos();  // 소리가 거의 없으면 정지
    } else if (rmsValue <= 200) {

      movementPattern1(distance_cm);

    } else {

      movementPattern2(distance_cm);

    }
  }

  if (movementPattern != nullptr) {
    movementPattern(distance_cm);
  }

  delay(10);  // 안정화 대기
}

// 서보모터 움직임 패턴 정의

void movementPattern1(float distance) {

  //Serial.println("movementPattern1");

  // move the servo from 0 to 30 degrees and back to 0 over 1 seconds with a cosine function
  static float duration = 0;
  static unsigned long startMs = 0;
  static Servo& servo = servo1;
  int maxAngle = 120;
  int restTime = 500; // ms Time to rest after moving the servo, before ending the movement

  // first call
  if (movementPattern == nullptr) {

    // remember the current movementPattern function
    movementPattern = movementPattern1;

    startMs = millis();
    duration = map(distance, 0, 60, 800, 3000);  // 거리에 따라 속도 조절
    //duration = 800;

    // randomly choose the servo to move
    int iServo = random(0, 4);
    servo = *servos[iServo];

    Serial.print("Begin movementPattern1 on servo ");
    Serial.println(iServo);
  }

  // movement time
  unsigned long time = millis() - startMs;

  if (time <= duration) {

    float angle = maxAngle * (0.5 - cos(TWO_PI * (time) / duration) / 2);
    servo.write(angle);
    //Serial.println(angle);

  } else if (time < duration + restTime ) {
    // Juste wait

  } else {

    // End of movement
    servo.write(0);
    movementPattern = nullptr;

    Serial.println("End movementPattern1");
  }
}


void movementPattern2(float distance) {

  static float duration = 0;
  static unsigned long startMs = 0;
  int maxAngle = 120;
  int restTime = 500; // ms Time to rest after moving the servo, before ending the movement

  // first call
  if (movementPattern == nullptr) {

    // remember the current movementPattern function
    movementPattern = movementPattern2;

    startMs = millis();
    // duration = map(distance, 0, 60, 200, 2000);  // 거리에 따라 속도 조절
    duration = 2000;

    Serial.print("Begin movementPattern2");
  }

  // movement time
  unsigned long time = millis() - startMs;

  if (time <= duration) {

    float angle = maxAngle * (0.5 - cos(TWO_PI * (time) / duration) / 2);
    //Serial.println(angle);
    for (int i = 0; i < 4; i++) {
      servos[i]->write(angle);
    }

  } else if (time < duration + restTime ) {
    // Juste wait

  } else {

    // End of movement
    for (int i = 0; i < 4; i++) {
      servos[i]->write(0);
    }
    movementPattern = nullptr;

    Serial.println("End movementPattern2");
  }

}

// 서보모터 정지
void stopAllServos() {
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
}

// 사운드 센서 값 계산
float getSoundLevel() {
  int avg = 502;
  int sum = 0;
  for (int i = 0; i < 10; i++) {  // 샘플링
    int sound = abs(analogRead(MicPin) - avg) * 100;
    sum += sound;
    delay(10);
  }
  return sum / 10.0;  // 평균 소리 레벨 반환
}


```

- If I use the stepper motor, the noise will be reduced and the movement will be more precise. Besides, moving 3 stepper motors has more dynamic movement than 4 servo motors.
