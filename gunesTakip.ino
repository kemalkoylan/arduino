#include <Servo.h>
Servo servo1;
int sol;
int sag;
int yon = 90;



void setup() {
  servo1.attach(6);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
  servo1.write(yon);


}

void loop() {
  sol = analogRead(A0);
  sag = analogRead(A1);
  Serial.print("SOL SENSÖR : ");
  Serial.print(sol);
  Serial.print(" - SAĞ SENSÖR : ");
  Serial.println(sag);
  delay(50);

  if(sol > sag){
    if(yon > 0){
      yon--;
    }
  }else if( sag > sol ){
    if( yon < 180){
      yon++;
    }
  }
  servo1.write(yon);
  
}
