

int buton = 12;
int rastgele;

void setup() {
  pinMode(buton,INPUT);
  for(int i = 2; i<=9;i++){
    pinMode(i,OUTPUT);
  }

  randomSeed(analogRead(A0));
  Serial.begin(9600);

}

void loop() {

  rastgele = random(0,10);
  

  if(digitalRead(buton) == 1){
    butonaBasildi(rastgele);
    delay(50);
  }




}

void butonaBasildi(int gelen){

  for(int i = gelen; i>=0;i--){
    sayi_sec(i);
    delay(1000);
  }
  
}


void sayi_sec(int a){
  switch(a){
    case 0:
      rakam_0();
    break;

    case 1:
      rakam_1();
    break;

    case 2:
      rakam_2();
    break;

    case 3:
      rakam_3();
    break;

    case 4:
      rakam_4();
    break;

    case 5:
      rakam_5();
    break;

    case 6:
      rakam_6();
    break;

    case 7:
      rakam_7();
    break;

    case 8:
      rakam_8();
    break;

    case 9:
      rakam_9();
    break;


    
  }
  
}




void rakam_1(){
 
 digitalWrite(3,1);  //sağ alt
 digitalWrite(4,LOW);  //alt
 digitalWrite(5,LOW);  //sol alt
 digitalWrite(6,1);  //sağ ust
 digitalWrite(7,LOW);  //ust
 digitalWrite(8,LOW);  //sol ust
 digitalWrite(9,LOW);  //orta
}

void rakam_2(){

 digitalWrite(3,0);  //sağ alt
 digitalWrite(4,1);  //alt
 digitalWrite(5,1);  //sol alt
 digitalWrite(6,1);  //sağ ust
 digitalWrite(7,1);  //ust
 digitalWrite(8,0);  //sol ust
 digitalWrite(9,1);  //orta
}

void rakam_3(){
 
 digitalWrite(3,1);  //sağ alt
 digitalWrite(4,1);  //alt
 digitalWrite(5,0);  //sol alt
 digitalWrite(6,1);  //sağ ust
 digitalWrite(7,1);  //ust
 digitalWrite(8,0);  //sol ust
 digitalWrite(9,1);  //orta
}

void rakam_4(){

 digitalWrite(3,1);  //sağ alt
 digitalWrite(4,0);  //alt
 digitalWrite(5,0);  //sol alt
 digitalWrite(6,1);  //sağ ust
 digitalWrite(7,0);  //ust
 digitalWrite(8,1);  //sol ust
 digitalWrite(9,1);  //orta
}

void rakam_5(){

 digitalWrite(3,1);  //sağ alt
 digitalWrite(4,1);  //alt
 digitalWrite(5,0);  //sol alt
 digitalWrite(6,0);  //sağ ust
 digitalWrite(7,1);  //ust
 digitalWrite(8,1);  //sol ust
 digitalWrite(9,1);  //orta
}

void rakam_6(){
 
 digitalWrite(3,1);  //sağ alt
 digitalWrite(4,1);  //alt
 digitalWrite(5,1);  //sol alt
 digitalWrite(6,LOW);  //sağ ust
 digitalWrite(7,1);  //ust
 digitalWrite(8,1);  //sol ust
 digitalWrite(9,1);  //orta
}

void rakam_7(){
 
 digitalWrite(3,1);  //sağ alt
 digitalWrite(4,LOW);  //alt
 digitalWrite(5,LOW);  //sol alt
 digitalWrite(6,1);  //sağ ust
 digitalWrite(7,1);  //ust
 digitalWrite(8,LOW);  //sol ust
 digitalWrite(9,LOW);  //orta
}

void rakam_8(){
 
 digitalWrite(3,1);  //sağ alt
 digitalWrite(4,1);  //alt
 digitalWrite(5,1);  //sol alt
 digitalWrite(6,1);  //sağ ust
 digitalWrite(7,1);  //ust
 digitalWrite(8,1);  //sol ust
 digitalWrite(9,1);  //orta
}

void rakam_9(){

 digitalWrite(3,HIGH);  //sağ alt
 digitalWrite(4,HIGH);  //alt
 digitalWrite(5,LOW);  //sol alt
 digitalWrite(6,HIGH);  //sağ ust
 digitalWrite(7,HIGH);  //ust
 digitalWrite(8,HIGH);  //sol ust
 digitalWrite(9,HIGH);  //orta
}

void rakam_0(){

 digitalWrite(3,HIGH);  //sağ alt
 digitalWrite(4,HIGH);  //alt
 digitalWrite(5,HIGH);  //sol alt
 digitalWrite(6,HIGH);  //sağ ust
 digitalWrite(7,HIGH);  //ust
 digitalWrite(8,HIGH);  //sol ust
 digitalWrite(9,LOW);  //orta
}
