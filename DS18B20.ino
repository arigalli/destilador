/*sensor de temperatura DS10B20*/

#include<OneWire.h>                       //library OneWire-master
#include<DallasTemperature.h>           //library Arduino-Temperatura-Control-Library-master

OneWire ourWire(7);                   //Se establece el pin 5  como bus OneWire
DallasTemperature sensors(&ourWire);    //Se declara una variable u objeto para nuestro sensor

float temp;

void setup(){
Serial.begin(115200);
sensors.begin();   //Se inicia el sensor

}

void loop(){

sensors.requestTemperatures();//Se envía el comando para leer la temperatura
temp= sensors.getTempCByIndex(0); //Se obtiene la temperatura en ºC

Serial.print("temperatura: ");
Serial.println(temp);

delay(5000);

}
