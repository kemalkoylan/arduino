#define trig 9
#define echo 10
int mesafe;
int sure;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(6,OUTPUT);
}

void loop() {

  if(mesafeBul() <= 15){
    int veri = mesafeBul();
    veri = map(veri,0,15,255,0);
    analogWrite(6,veri);    
  }else{
    digitalWrite(6,LOW);
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
  return mesafe;
}
