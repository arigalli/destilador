/*presurostato*/


const int presurostato = 5;    //Se declara una variable para el presurosto


void setup(){
Serial.begin(115200);
pinMode(presurostato, INPUT);

}

void loop(){

if(digitalRead(presurostato)==LOW){
Serial.println("bidon lleno");
}else{
Serial.println("bidon llenandose");  
}


delay(2000);

}
