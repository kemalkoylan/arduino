#define alt_kirmizi 13
#define alt_sari 12
#define alt_yesil 11
#define sol_kirmizi 10
#define sol_sari 9
#define sol_yesil 8
#define yukari_kirmizi 7
#define yukari_sari 6
#define yukari_yesil 5
#define sag_kirmizi 4
#define sag_sari 3
#define sag_yesil 2


void setup() {
  for(int i = 13;i>1;i--){
    pinMode(i,OUTPUT);
  }

}

void loop() {
       digitalWrite(alt_kirmizi,HIGH);
       digitalWrite(alt_sari,LOW);
       digitalWrite(alt_yesil,LOW);
       digitalWrite(sol_kirmizi,LOW);
       digitalWrite(sol_sari,LOW);
       digitalWrite(sol_yesil,HIGH);
       digitalWrite(yukari_kirmizi,HIGH);
       digitalWrite(yukari_sari,LOW);
       digitalWrite(yukari_yesil,LOW);
       digitalWrite(sag_kirmizi,LOW);
       digitalWrite(sag_sari,LOW);
       digitalWrite(sag_yesil,HIGH);

       delay(5000);

       digitalWrite(alt_kirmizi,LOW);
       digitalWrite(alt_sari,HIGH);
       digitalWrite(alt_yesil,LOW);
       digitalWrite(sol_kirmizi,LOW);
       digitalWrite(sol_sari,HIGH);
       digitalWrite(sol_yesil,LOW);
       digitalWrite(yukari_kirmizi,LOW);
       digitalWrite(yukari_sari,HIGH);
       digitalWrite(yukari_yesil,LOW);
       digitalWrite(sag_kirmizi,LOW);
       digitalWrite(sag_sari,HIGH);
       digitalWrite(sag_yesil,LOW);

       delay(1000);

       digitalWrite(alt_kirmizi,LOW);
       digitalWrite(alt_sari,LOW);
       digitalWrite(alt_yesil,HIGH);
       digitalWrite(sol_kirmizi,HIGH);
       digitalWrite(sol_sari,LOW);
       digitalWrite(sol_yesil,LOW);
       digitalWrite(yukari_kirmizi,LOW);
       digitalWrite(yukari_sari,LOW);
       digitalWrite(yukari_yesil,HIGH);
       digitalWrite(sag_kirmizi,HIGH);
       digitalWrite(sag_sari,LOW);
       digitalWrite(sag_yesil,LOW);

       delay(5000);


  
 

}
