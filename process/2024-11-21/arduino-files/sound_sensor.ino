#include <arduinoFFT.h>

// 핀 설정
#define MIC_PIN A0

// FFT 설정
#define SAMPLES 128            // 샘플 개수 최적화
#define SAMPLING_FREQUENCY 4000 // 샘플링 주파수(Hz)

// 배열 생성
float vReal[SAMPLES];          // float 사용으로 메모리 절약
float vImag[SAMPLES];

ArduinoFFT<float> FFT(vReal, vImag, SAMPLES, SAMPLING_FREQUENCY);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // 1. 아날로그 입력 읽기
  for (int i = 0; i < SAMPLES; i++) {
    vReal[i] = analogRead(MIC_PIN);  // 마이크 값 읽기
    vImag[i] = 0;                   // FFT에 필요한 허수 부분 초기화
    delayMicroseconds(1000000 / SAMPLING_FREQUENCY);
  }

  // 2. FFT 수행
  FFT.windowing(FFT_WIN_TYP_HAMMING, FFT_FORWARD); // 창 함수 적용
  FFT.compute(FFT_FORWARD);                       // FFT 계산
  FFT.complexToMagnitude();                       // 크기 계산

  // 3. 소리의 세기 측정 (RMS 계산)
  float sum = 0;
  for (int i = 0; i < SAMPLES; i++) {
    sum += vReal[i] * vReal[i];
  }
  float volume = sqrt(sum / SAMPLES);
  Serial.print("Volume: ");
  Serial.println(volume);

  // 4. 소리의 높이 측정 (주파수 계산)
  float maxValue = 0;
  int maxIndex = 0;

  for (int i = 1; i < SAMPLES / 2; i++) { // 주파수 성분의 절반만 사용
    if (vReal[i] > maxValue && i > 2) { // 저주파 노이즈 필터링
      maxValue = vReal[i];
      maxIndex = i;
    }
  }

  // 주파수 계산
  float frequency = (maxIndex * SAMPLING_FREQUENCY) / SAMPLES;
  Serial.print("Frequency: ");
  Serial.println(frequency);

  delay(100);  // 출력 속도 조절
}
