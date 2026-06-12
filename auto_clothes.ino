// Enrouleur vêtements automatique V2 - Projet CSC 2027
#include <Servo.h>

Servo monServo;
int capteurPluie = A0;  // YL-69 sur A0
int pinServo = 9;       // Servo sur pin 9
int seuilPluie = 400;   // < 400 = pluie

void setup() {
  Serial.begin(9600);
  monServo.attach(pinServo);
  monServo.write(0);  // Linge dehors au départ
  Serial.println("Systeme demarre");
}

void loop() {
  int valeurPluie = analogRead(capteurPluie);
  Serial.println(valeurPluie);

  if (valeurPluie < seuilPluie) {
    monServo.write(180);  // Rentre le linge
    Serial.println("PLUIE - Rangement");
    delay(2000);
  } else {
    monServo.write(0);    // Laisse dehors
    Serial.println("Sec - Linge dehors");
  }
  delay(1000);
}
