int arti[3] = {13,12,11};
int eksi[9] = {10,9,8,7,6,5,4,3,2};


void setup() {
  for(int i = 13; i>1; i--){
    pinMode(i,OUTPUT);
  }

  for(int i = 0; i<9;i++){
    digitalWrite(eksi[i],HIGH);
  }
}

void loop() {
  hepsi(100);
  merdiven(150);
  katlar(200);
  katlar(300);
  hepsi(50);
  merdiven(250);
  merdiven(500);

  
  
}



void hepsi(int sure){
  for(int i = 0;i<3;i++){
    digitalWrite(arti[i],HIGH);
    for(int t = 0;t<9;t++){
      digitalWrite(eksi[t],LOW);
      delay(sure);
      digitalWrite(eksi[t],HIGH);
      delay(sure);
    }
    digitalWrite(arti[i],LOW);
  }
}

void katlar(int sure){
   for (int i = 0;i<3;i++){
    digitalWrite(arti[i],HIGH);
      for(int j = 0;j<9;j++){
        digitalWrite(eksi[j],LOW);
      }
      delay(sure);
      digitalWrite(arti[i],LOW);
        for(int j = 0;j<9;j++){
        digitalWrite(eksi[j],HIGH);
        }
      delay(sure);
  }
}

void merdiven(int sure){
  for (int i = 0;i<3;i++){
    digitalWrite(arti[i],HIGH);
      for(int j = 0;j<9;j++){
        digitalWrite(eksi[j],LOW);
      }
      delay(sure);     
  }

  for (int i = 2;i>-1;i--){
    digitalWrite(arti[i],LOW);
      for(int j = 0;j<9;j++){
        digitalWrite(eksi[j],LOW);
      }
      delay(sure);
          
  }
      for(int j = 0;j<9;j++){
        digitalWrite(eksi[j],HIGH);
      } 
  
}
  
