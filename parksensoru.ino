#define trig 9
#define echo 8
int mesafe;
int sure;
int k1 = 7,k2 = 6,s1 = 5,s2 = 4;
int buzzer = 3;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(k1,OUTPUT);
  pinMode(k2,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {

  if(mesafeBul() < 5){
    digitalWrite(k1,HIGH);
    digitalWrite(k2,HIGH);
    digitalWrite(s1,HIGH);
    digitalWrite(s2,HIGH);
    //tone(buzzer,250);
    
  }else if(mesafeBul() < 10){
    digitalWrite(k1,LOW);
    digitalWrite(k2,HIGH);
    digitalWrite(s1,HIGH);
    digitalWrite(s2,HIGH);
    //tone(buzzer,250);
    //delay(100);
    //noTone(buzzer);
  }else if(mesafeBul() < 15){
    digitalWrite(k1,LOW);
    digitalWrite(k2,LOW);
    digitalWrite(s1,HIGH);
    digitalWrite(s2,HIGH);
    //tone(buzzer,250);
    //delay(150);
    //noTone(buzzer);
  }else if(mesafeBul() < 20){
    digitalWrite(k1,LOW);
    digitalWrite(k2,LOW);
    digitalWrite(s1,LOW);
    digitalWrite(s2,HIGH);
    //tone(buzzer,250);
    //delay(200);
    //noTone(buzzer);
  }else{
    digitalWrite(k1,LOW);
    digitalWrite(k2,LOW);
    digitalWrite(s1,LOW);
    digitalWrite(s2,LOW);
   // noTone(buzzer);
  }
  
  
}


int mesafeBul(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  sure = pulseIn(echo,HIGH);
  mesafe = (sure/2)/29.1;
  Serial.println(mesafe);
  return mesafe;
}
