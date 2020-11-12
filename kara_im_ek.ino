int gorevler[6] = {1,2,1,2,1,2};
int verilen = 0;

void setup() {
  for(int port = 0;port<14;port++){
    pinMode(port,OUTPUT);
  }
}

void loop() {

//  for( int i = 0; i<14;i++){
//    digitalWrite(i,HIGH);
//  }
//  delay(100);
//  for(int i = 0; i<14;i++){
//    digitalWrite(i,LOW);
//  }
  //delay(100);
  
  switch(gorevler[verilen]){
    case 1:
    ileri();
    break;
    case 2:
    geri();
    break;
  }
  
  if(verilen == 5){
    verilen = 0;
  }else{
    verilen++;
  }
  
  

}

void ileri(){
  for(int i = 0;i<14;i++){
    digitalWrite(i,HIGH);
    delay(20);
    digitalWrite(i,LOW);
    delay(20);
  }
}
void geri(){
  for(int i = 13;i>-1;i--){
    digitalWrite(i,HIGH);
    delay(20);
    digitalWrite(i,LOW);
    delay(20);
  }
}
