#define LED_PIN 13
#define BUTTON_PIN 8

float brightness = 5;
boolean goingUp = true;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);

  // Serial.begin(9600);
}

void loop() {
  
  boolean buttonState = digitalRead(BUTTON_PIN);

  if(buttonState == LOW){
    if (goingUp) {
      brightness += 0.1;
      if (brightness > 20){
        brightness = 0;
      }
    } else {
      brightness -= 0.1;
      if (brightness < 0){
        brightness = 20;
      }
    }
  } else {
    goingUp = !goingUp;
  }

  digitalWrite(LED_PIN, true);
  delay(floor(brightness));
  digitalWrite(LED_PIN, false);
  delay(floor(20 - brightness));

  // Serial.println(buttonState);
  // //Serial.println
  // digitalWrite(LED_PIN, buttonState);
}
