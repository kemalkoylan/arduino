#include <AvrI2c_Greiman.h>
#include <LiquidCrystal_I2C_AvrI2C.h>

#include <Servo.h>

LiquidCrystal_I2C_AvrI2C ekran(0x27,16,2);

#define yesilLed  9
#define kirmiziLed 8
#define girisBtn 5
#define cikisBtn 4
#define servoPin 3

Servo kapi;

int kapasite = 5;




void setup() {
  ekran.begin();
  ekran.backlight();
  Serial.begin(9600);
  pinMode(yesilLed,OUTPUT);
  pinMode(kirmiziLed,OUTPUT);
  pinMode(girisBtn,INPUT);  //1 basılı
  pinMode(cikisBtn,INPUT);  // 1 basılı
  kapi.attach(servoPin);   // 0 kapi açık -  90 kapı kapalı
  
}

void loop() {

  if(kapasite == 0){
    //otopark dolu
    digitalWrite(yesilLed,LOW);
    digitalWrite(kirmiziLed,HIGH);
    
    ekran.setCursor(0,0);
    ekran.print("HOSGELDINIZ");
    ekran.setCursor(0,1);
    ekran.print("OTOPARK DOLU"); 
  }else{
    //otopark müsait
    digitalWrite(yesilLed,HIGH);
    digitalWrite(kirmiziLed,LOW);
    ekran.setCursor(0,0);
    
    ekran.print("HOSGELDINIZ");
    ekran.setCursor(0,1);
    ekran.print((String)"Kapasitemiz : "+kapasite);
  }

  if(digitalRead(girisBtn) == 1 ){
    if(kapasite != 0){
      kapasite--;
      kapi.write(0);
      delay(2500);
      kapi.write(90);
      ekran.clear();
    } 
  }

  if(digitalRead(cikisBtn) == 1 ) {
    if(kapasite < 5){
      kapasite++;
      kapi.write(0);
      delay(2500);
      kapi.write(90);
      ekran.clear();
    }
  } 

}
