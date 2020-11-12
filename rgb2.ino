int port[2][3] = {
  {11,10,9},
  {6,5,3}
};
int sure = 500;

void setup() {
  for(int i = 0;i<2;i++){
    for(int k = 0;k<3;k++){
      pinMode(port[i][k],OUTPUT);
    }  
  }
  for(int i = 0;i<2;i++){
    for(int k = 0;k<3;k++){
      digitalWrite(port[i][k],HIGH);
    }
  }
}
void loop() {
  for(int i = 0;i<2;i++){
    for(int k = 0;k<3;k++){
      digitalWrite(port[i][k],LOW);
      delay(sure);
      digitalWrite(port[i][k],HIGH);
      delay(sure);
    }
  }
  for(int i = 0; i<3;i++){
      digitalWrite(port[0][i],LOW);
      digitalWrite(port[1][i],LOW);
      delay(sure);
      digitalWrite(port[0][i],HIGH);
      digitalWrite(port[1][i],HIGH);
      delay(sure);
  }

  for(int i = 0;i<2;i++){
    for(int k = 0;k<3;k++){
      for(int r = 0;r<256;r++){
        analogWrite(port[i][k],r);
        delay(5);
      }
    }
  }

   for(int i = 0;i<2;i++){
    for(int k = 0;k<3;k++){
      for(int r = 255;r>-1;r--){
        analogWrite(port[i][k],r);
        delay(5);
      }
      digitalWrite(port[i][k],HIGH);
    }
  }

  for(int i = 0;i<2;i++){
    for(int k = 0;k<3;k++){
      for(int r = 255;r>-1;r--){
        analogWrite(port[i][k],r);
        delay(5);
      }
      for(int r = 0;r<256;r++){
        analogWrite(port[i][k],r);
        delay(5);
      }
    }
  }


}
