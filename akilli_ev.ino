int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;


void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()){
    char veri = Serial.read();

    if(veri == 'A'){
      digitalWrite(led1,HIGH);
    }else if(veri == 'B'){
      digitalWrite(led1,LOW);
    }else if(veri == 'C'){
      digitalWrite(led2,HIGH);
    }else if(veri == 'D'){
      digitalWrite(led2,LOW);
    }else if(veri == 'E'){
      digitalWrite(led3,HIGH);
    }else if(veri == 'F'){
      digitalWrite(led3,LOW);
    }else if(veri == 'G'){
      digitalWrite(led4,HIGH);
    }else if( veri == 'H'){
      digitalWrite(led4,LOW);
    }
delay(20); 
  }

}
