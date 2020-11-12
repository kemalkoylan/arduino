int sensor = 2;
int buzzer = 3;
int kirmizi = 5;
int yesil = 6;
int buton = 8;
bool alarmDurum = false;


void setup() {

  pinMode(sensor,INPUT);
  pinMode(kirmizi,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(buton,INPUT);
 

}

void loop() {

  if(digitalRead(sensor) == 1){
    alarmDurum = true;
  }

  if(digitalRead(buton) == 1){
    alarmDurum = false;
  }


  if(alarmDurum == false){
    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,LOW);
    noTone(buzzer);
  }else{
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,HIGH);
    tone(buzzer,250);
    delay(100);
    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,LOW);
    noTone(buzzer);
    delay(100);
  }
}
