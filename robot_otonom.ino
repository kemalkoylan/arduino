//kafa salla
//kolları salla
//kolları çapraz
//sağkol yukları kafa sağ sol
//sol kol yukarı kafa sağ sol
#include <Servo.h>

Servo kafa;
Servo sag;  //10
Servo sol;  //11
int sayi;

void setup() {

  kafa.attach(9);
  sag.attach(10);
  sol.attach(11);

  kafa.write(90);
  sol.write(90);
  sag.write(90);

  randomSeed(analogRead(A0));
  

}

void loop() {

  sayi = random(1,6);
  
  
  switch(sayi){

    case 1:
      kafaSalla();
    break;

    case 2:
      kolSalla();
    break;

    case 3:
      caprazSalla();
    break;

    case 4:
      sag_kafaSalla();
    break;

    case 5:
      sol_kafaSalla();
    break;

  }
  delay(250);

 
}

void kafaSalla(){
  kafa.write(20);
  delay(250);
  kafa.write(160);
  delay(250);
}

void kolSalla(){
  sol.write(30);
  sag.write(150);
  delay(300);
  sol.write(150);
  sag.write(30);
  delay(300);
}

void caprazSalla(){
  sol.write(30);
  sag.write(30);
  delay(300);
  sol.write(150);
  sag.write(150);
  delay(300);

}

void sag_kafaSalla(){
  sag.write(180);
  kafa.write(20);
  delay(250);
  kafa.write(160);
    delay(250);
    sag.write(90);
}

void sol_kafaSalla(){
  sol.write(0);
  kafa.write(20);
  delay(250);
  kafa.write(160);
  delay(250);
  sol.write(90);
}
