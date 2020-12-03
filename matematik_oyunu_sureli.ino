#define yesilButon 4
#define yesilLED 6
#define kirmiziButon 3
#define kirmiziLED 7
#include <LCD5110_Basic.h>
LCD5110 ekran(8,9,10,11,12);
extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
int oyunDurumu = 0;
int sayi1,sayi2,sonucD,sonucY;
bool yeni = false;
int dogru_mu;
int puan = 0;
int soru = 1;
int sure=4000;    //Süre Ekleme Kodu
unsigned long zaman;   //Süre Ekleme Kodu
unsigned long simdikiZaman;   //Süre Ekleme Kodu
unsigned long zamanFarki;


void setup() {
  pinMode(yesilButon,INPUT);
  pinMode(kirmiziButon,INPUT);
  pinMode(yesilLED,OUTPUT);
  pinMode(kirmiziLED,OUTPUT);
  ekran.InitLCD();
  ekran.setFont(SmallFont);
  ekran.clrScr();
  ekran.print("Matematik",CENTER,15);
  ekran.print("Oyununa",CENTER,20);
  ekran.print("HOSGELDINIZ",CENTER,25);
  randomSeed(analogRead(A0));
  delay(1000);
}

void loop() {
  
  
  switch(oyunDurumu){
    case 0:
    ekran.clrScr();
    ekran.print("Islem",CENTER,10);
    ekran.print("Secin",CENTER,18);
    ekran.print("CARPMA",LEFT,40);
    ekran.print("TOPLAMA",RIGHT,40);
    if(digitalRead(yesilButon) == true){
      oyunDurumu = 1;
      delay(150);
    }
    if(digitalRead(kirmiziButon) == true){
      oyunDurumu = 2;
      delay(150);
    }
    break;
    case 1: // carpma
    if(yeni == false){
      yeni = true;
      sayi1 = random(0,10);
      sayi2 = random(0,10);
      dogru_mu = random(0,2);
      sonucD = sayi1*sayi2;
      sonucY = sonucD + random(5,25);
        ekran.clrScr();
      if(dogru_mu == 1){
       ekran.print((String)sayi1 + '*' + sayi2 + '=' + sonucD,CENTER,10);   
      }else if(dogru_mu == 0){
        ekran.print((String)sayi1 + '*' + sayi2 + '=' + sonucY,CENTER,10);  
      }
      ekran.print("DOGRU",LEFT,40);
      ekran.print("YANLIS",RIGHT,40);
    }
    zaman = millis();   //Süre Ekleme Kodu
    zamanFarki = zaman-simdikiZaman;
    if(zamanFarki > sure){
      soru++;
        digitalWrite(kirmiziLED,HIGH);
        ekran.print("SURE DOLDU",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(kirmiziLED,LOW);
      
    }
    if(digitalRead(yesilButon) == true){
      ekran.clrScr();
      if(dogru_mu == 1){
        puan++;
        soru++;
        digitalWrite(yesilLED,HIGH);
        ekran.print("BILDIN",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(yesilLED,LOW);
      }else{
        soru++;
        digitalWrite(kirmiziLED,HIGH);
        ekran.print("OLMADI",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(kirmiziLED,LOW);
      }
    }
    if(digitalRead(kirmiziButon) == true){
      ekran.clrScr();
      if(dogru_mu == 0){
        puan++;
        soru++;
        digitalWrite(yesilLED,HIGH);
        ekran.print("BILDIN",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(yesilLED,LOW);
      }else{
        soru++;
        digitalWrite(kirmiziLED,HIGH);
        ekran.print("OLMADI",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(kirmiziLED,LOW);
      }
    }
    if(soru == 11){
      ekran.clrScr();
      ekran.print("Oyun Bitti",CENTER,15);
      ekran.print("PUANINIZ:",CENTER,20);
      ekran.printNumI(puan,CENTER,25);
      puan = 0;
      soru = 1;
      oyunDurumu = 0;
      delay(2500);
    } 
    break;
    case 2:
     if(yeni == false){
      yeni = true;
      sayi1 = random(0,10);
      sayi2 = random(0,10);
      dogru_mu = random(0,2);
      sonucD = sayi1+sayi2;
      sonucY = sonucD + random(5,25);
        ekran.clrScr();
      if(dogru_mu == 1){
       ekran.print((String)sayi1 + '+' + sayi2 + '=' + sonucD,CENTER,10);   
      }else if(dogru_mu == 0){
        ekran.print((String)sayi1 + '+' + sayi2 + '=' + sonucY,CENTER,10);  
      }
      ekran.print("DOGRU",LEFT,40);
      ekran.print("YANLIS",RIGHT,40);
    }
    zaman = millis();   //Süre Ekleme Kodu
    zamanFarki = zaman-simdikiZaman;
    if(zamanFarki > sure){
      soru++;
        digitalWrite(kirmiziLED,HIGH);
        ekran.print("SURE DOLDU",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(kirmiziLED,LOW);
      
    }
    if(digitalRead(yesilButon) == true){
      ekran.clrScr();
      if(dogru_mu == 1){
        puan++;
        soru++;
        digitalWrite(yesilLED,HIGH);
        ekran.print("BILDIN",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(yesilLED,LOW);
      }else{
        soru++;
        digitalWrite(kirmiziLED,HIGH);
        ekran.print("OLMADI",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(kirmiziLED,LOW);
      }
    }
    if(digitalRead(kirmiziButon) == true){
      ekran.clrScr();
      if(dogru_mu == 0){
        puan++;
        soru++;
        digitalWrite(yesilLED,HIGH);
        ekran.print("BILDIN",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(yesilLED,LOW);
      }else{
        soru++;
        digitalWrite(kirmiziLED,HIGH);
        ekran.print("OLMADI",CENTER,15);
        yeni = false;
        delay(1000);
        digitalWrite(kirmiziLED,LOW);
      }
    }
    if(soru == 11){
      ekran.clrScr();
      ekran.print("Oyun Bitti",CENTER,15);
      ekran.print("PUANINIZ:",CENTER,20);
      ekran.printNumI(puan,CENTER,25);
      puan = 0;
      soru = 1;
      oyunDurumu = 0;
      delay(2500);
    }
    break;  
  }
}
