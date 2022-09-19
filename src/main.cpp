#include <Arduino.h>
#include "max6675.h"

int thermoDO = 4;
int thermoCS = 5;
int thermoCLK = 6;
unsigned long time;
float temp;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

void setup() {
  Serial.begin(115200);  
}

void loop() {

  time = millis();
  temp = thermocouple.readCelsius();
  
  Serial.print(time);
  Serial.print(",");
  Serial.println(temp);

  delay(1000);

}