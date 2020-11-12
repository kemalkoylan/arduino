#include <Servo.h>

Servo alt;
Servo orta;
Servo ust;

int altPot;
int ortaPot;
int ustPot;



void setup() {
  alt.attach(11);
  orta.attach(10);
  ust.attach(9);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
 

}

void loop() {
  altPot = analogRead(A2);
  ortaPot = analogRead(A1);
  ustPot = analogRead(A0);

    altPot = map(altPot,0,1024,0,180);
    ortaPot = map(ortaPot,0,1024,0,180);
    ustPot = map(ustPot,0,1024,0,180);

    alt.write(altPot);
    orta.write(ortaPot);
    ust.write(ustPot);
    delay(25);


}
