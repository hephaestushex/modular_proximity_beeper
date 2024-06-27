//include module for ultrasonic sound sensor
#include "NewPing.h"

// define pins for buzzer and sensor
#define TRIG 22
#define ECHO 21
#define BUZZER 17

//max distance to detect
#define MAX_DETECTION_RANGE 400

//distance to buzz at
#define BUZZ_RANGE 200

//Define the Sensor
NewPing sensor(TRIG, ECHO, MAX_DETECTION_RANGE);

//declare a distance variable
float distance = 0.0f;

void setup() {
  //define the buzzer as a output pin
  pinMode(BUZZER, OUTPUT);
}
void loop() {
  //sense distance
  distance = sensor.ping_cm();
  
  //based on distace, beep the buzzer
  if (distance <= BUZZ_RANGE)
  {
    tone(BUZZER, 656, 500);
  }
  //delay
  delay(500);
}

