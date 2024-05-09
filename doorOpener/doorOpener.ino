#include <microDS18B20.h>
MicroDS18B20<0> sensor;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensor.requestTemp();
  
  // вместо delay используй таймер на millis(), пример async_read
  delay(1000);
  
  // проверяем успешность чтения и выводим
  if (sensor.readTemp()) Serial.println(sensor.getTemp());
  else Serial.println("error");
}