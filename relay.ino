/*controla el uso de los relays
uno en digital 6 y otro en digital 8*/

const int pinRELE1 = 6;
const int pinRELE2 = 8;

void setup(){
Serial.begin(115200);
pinMode(pinRELE1, OUTPUT);
pinMode(pinRELE2, OUTPUT);
}

void loop(){
  digitalWrite(pinRELE1, HIGH);
  digitalWrite(pinRELE2, LOW);
  delay(5000);
  digitalWrite(pinRELE1, LOW);
  digitalWrite(pinRELE2, HIGH);
  delay(5000);
}
