#include <Arduino.h>


void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\nHello, World!");
  Serial.println("\nName: Petar Kirkov \nStudent Number: 000800914");
  Serial.println("\nChip ID: " + String(ESP.getChipId()) + "\nFlash Chip ID: " + String(ESP.getFlashChipId()));
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Time: ");
  long runningTime = millis();

  Serial.println(runningTime);
  delay(2000);
}