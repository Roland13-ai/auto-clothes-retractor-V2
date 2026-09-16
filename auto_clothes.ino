// Automatic clothes retractor V2
#include <Servo.h>

Servo myServo;
int rainSensor = A0;   // YL-69 on A0
int servoPin = 9;      // Servo on pin 9
int rainThreshold = 400; // < 400 = rain detected

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  myServo.write(0);  // Clothes out (default)
  Serial.println("System started");
}

void loop() {
  int rainValue = analogRead(rainSensor);
  Serial.println(rainValue);

  if (rainValue < rainThreshold) {
    myServo.write(180);  // Retract the line
    Serial.println("RAIN - Retracting");
    delay(2000);
  } else {
    myServo.write(0);    // Leave clothes out
    Serial.println("Dry - Clothes out");
  }
  delay(1000);
}
