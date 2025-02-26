#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(23, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(21, OUTPUT);
}

void loop() {
  // lampu merah
  digitalWrite(23, HIGH);
  digitalWrite(22, LOW);
  digitalWrite(21, LOW);
  delay(30000);

  // lampu kuning
  digitalWrite(23, LOW);
  digitalWrite(22, HIGH);
  digitalWrite(21, LOW);
  delay(5000);

  // lampu hijau
  digitalWrite(23, LOW);
  digitalWrite(22, LOW);
  digitalWrite(21, HIGH);
  delay(20000);
}