#define duduk 8
            //0do 1re 2mi 3fa 4sol 5la 6si 7do_
int nota[] = {262,294,330,349,392,440,494,523};
int sure= 400;


void setup() {
  pinMode(duduk,OUTPUT);

  

}

void loop() {

  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[7]);
  delay(sure);
  tone(duduk,nota[4]);
  delay(sure);
  tone(duduk,nota[7]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[2]);
  delay(sure);
  // ilk satır bitti

  tone(duduk,nota[3]);
  delay(sure);
  tone(duduk,nota[3]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[2]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);

  //2. satır

  tone(duduk,nota[3]);
  delay(sure);
  tone(duduk,nota[3]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[2]);
  delay(sure);
  tone(duduk,nota[2]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);

  //3. satır

  tone(duduk,nota[3]);
  delay(sure);
  tone(duduk,nota[3]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[2]);
  delay(sure);
  tone(duduk,nota[2]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);

  //4. satır

  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);
  tone(duduk,nota[7]);
  delay(sure);
  tone(duduk,nota[4]);
  delay(sure);
  tone(duduk,nota[7]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[2]);
  delay(sure);

  tone(duduk,nota[3]);
  delay(sure);
  tone(duduk,nota[3]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[2]);
  delay(sure);
  tone(duduk,nota[1]);
  delay(sure);
  tone(duduk,nota[0]);
  delay(sure);
  

}
