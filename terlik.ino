int isik = A5;
int led = 7;
int buton = 6;
// IŞIK:gündüz 220 gece 60
//BUTON basılı 1 değil 0
void setup() {
  Serial.begin(9600);
 pinMode(isik,INPUT);
 pinMode(led,OUTPUT);
 pinMode(buton,INPUT);

}

void loop() {
  int gelen_isik = analogRead(isik);
  int gelen_buton = digitalRead(buton);

   if(gelen_isik<135){
    //gece
      if(gelen_buton == 1){
        digitalWrite(led,HIGH);
      }else{
        digitalWrite(led,LOW);
      }
      
   }else{
    //gündüz
   }
   delay(50);
 

}
