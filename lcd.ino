//controla pantalla lcd destilador


#include <Wire.h>
#include <LiquidCrystal_I2C.h>           //library LiquidCrystal_I2C-1.1.2.zip

//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x27,16,2);  //

int i=1;

void setup(){
delay(1000);
Serial.begin(115200);
  // Inicializar el LCD
  lcd.init();
  //Encender la luz de fondo.
  lcd.backlight();
    lcd.clear(); 
    delay(1000);
  lcd.setCursor(6, 0);
  lcd.print("CUEM");
  lcd.setCursor(1, 1);
  lcd.print("DESTILADOR 1.0");
}

void loop(){
if(i==1){
fnuno();
}else{
fndos();
}
}

void fnuno(){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("funcion 1");
  lcd.setCursor(1,1);
  i=0;
  lcd.print(i);
  delay(5000);
}

void fndos(){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("funcion 2");
  lcd.setCursor(1,1);
  i=1;
  lcd.print(i);
  delay(5000);
}
