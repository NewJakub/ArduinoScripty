
// int notes[] = {262,294,330,349};
int e = 330;
int f = 349;
int g = 396;
int a = 440;
int d = 294;
int c2 =524;
int f2 =698;
int e2 =659;
int a2 =880;
int g2 =783;
int h  =493;
int h2 =987;
int d2 =587;
int c  =261;
int vstupDioda;

void setup() {
 Serial.begin(9600);

 pinMode(4, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(3, OUTPUT);
}


void zahraj(int ton,int doba, int vstup) {
  tone(8, ton);
  //digitalWrite(vstup, HIGH
  
  if (doba == 4) {digitalWrite(4, HIGH);} 
  else 
  if (doba == 2) {digitalWrite(7, HIGH);}
  else 
  {digitalWrite(3,HIGH);}
  
  delay(1500/doba);
  noTone(8);
  //digitalWrite(vstup, LOW);
  if (doba == 4) {digitalWrite(4, LOW);} else if (doba == 2) {digitalWrite(7, LOW);} else  {digitalWrite(3,LOW);} 
  delay(1000/doba);
 
}

void loop() {
 int keyVal = analogRead(A0);
 Serial.println(keyVal);
/*
 if(keyVal == 1023){
 tone(8, notes[0]);
}
else if(keyVal >= 990 && keyVal <= 1010){
  tone(8, notes[1]);
}
else if(keyVal >= 505 && keyVal <= 515){
  tone(8, notes[2]);
}
else if(keyVal >= 5 && keyVal <= 10){
  tone(8, notes[3]);
}
else{
   noTone(8);
  }
*/ 
 if(keyVal == 1023){

   vstupDioda = 7;
   
   zahraj(g,4,vstupDioda);
   zahraj(g,4,vstupDioda);
   zahraj(e,4,vstupDioda);
   delay(250);
   
   zahraj(g,4,vstupDioda);
   zahraj(g,4,vstupDioda);
   zahraj(e,4,vstupDioda);
   delay(250);

   zahraj(g,4,vstupDioda);
   zahraj(g,4,vstupDioda);
   zahraj(a,4,vstupDioda);
   zahraj(g,4,vstupDioda);
   
   zahraj(g,2,vstupDioda);
   zahraj(f,2,vstupDioda);
   
   zahraj(f,4,vstupDioda);
   zahraj(f,4,vstupDioda);
   zahraj(d,4,vstupDioda);
   delay(250);
   
   zahraj(f,4,vstupDioda);
   zahraj(f,4,vstupDioda);
   zahraj(d,4,vstupDioda);
   delay(250);

   zahraj(f,4,vstupDioda);
   zahraj(f,4,vstupDioda);
   zahraj(g,4,vstupDioda);
   zahraj(f,4,vstupDioda);

   zahraj(f,2,vstupDioda);
   zahraj(e,2,vstupDioda);
} 
else if(keyVal >= 990 && keyVal <= 1010){
  vstupDioda = 3;
 // 1. takt
   zahraj(a,4,vstupDioda);
   zahraj(a,4,vstupDioda);
   zahraj(a,4,vstupDioda);
   zahraj(f,8,vstupDioda);
   zahraj(c2,8,vstupDioda); 

// 2. takt
   zahraj(a,4,vstupDioda);
   zahraj(f,8,vstupDioda);
   zahraj(c2,8,vstupDioda); 
   zahraj(a,2,vstupDioda);

// 3. takt
   zahraj(e2,4,vstupDioda);
   zahraj(e2,4,vstupDioda);
   zahraj(e2,4,vstupDioda);
   zahraj(f2,8,vstupDioda);
   zahraj(c2,8,vstupDioda); 

// 4. takt
   zahraj(a,4,vstupDioda);
   zahraj(f,8,vstupDioda);
   zahraj(c2,8,vstupDioda); 
   zahraj(a,2,vstupDioda);
   
// 5. takt
   zahraj(a2,4,vstupDioda);
   zahraj(a,8,vstupDioda);
   zahraj(a,8,vstupDioda);
   zahraj(a2,4,vstupDioda);
   zahraj(a2,8,vstupDioda); 
   zahraj(g2,8,vstupDioda);

// 6. takt
   zahraj(g2,8,vstupDioda);
   zahraj(c2,8,vstupDioda);
   zahraj(g2,8,vstupDioda);
   zahraj(h,8,vstupDioda);
   zahraj(e2,4,vstupDioda); 
   zahraj(d2,8,vstupDioda);
   zahraj(d2,8,vstupDioda);

// 7. takt
   zahraj(c2,8,vstupDioda);
   zahraj(h,8,vstupDioda);
   zahraj(c2,8,vstupDioda);
   zahraj(f,8,vstupDioda);
   zahraj(a,4,vstupDioda);
   zahraj(f,8,vstupDioda);
   zahraj(a,8,vstupDioda);


// 8. takt
   zahraj(c2,4,vstupDioda);
   zahraj(a,8,vstupDioda);
   zahraj(c2,8,vstupDioda);
   zahraj(e2,2,vstupDioda);

// 9. takt
   zahraj(a2,4,vstupDioda);
   zahraj(a,8,vstupDioda);
   zahraj(a,8,vstupDioda);
   zahraj(a2,4,vstupDioda);
   zahraj(a2,8,vstupDioda);
   zahraj(g2,8,vstupDioda);

// 10. takt
   zahraj(g2,8,vstupDioda);
   zahraj(f2,8,vstupDioda);
   zahraj(g2,8,vstupDioda);
   zahraj(h,8,vstupDioda);
   zahraj(e2,4,vstupDioda);
   zahraj(d2,8,vstupDioda);
   zahraj(d2,8,vstupDioda);


}
else if(keyVal >= 505 && keyVal <= 515){
   vstupDioda = 7;
   zahraj(a,4,vstupDioda);
   zahraj(a,4,vstupDioda);
   zahraj(a,4,vstupDioda);
   zahraj(c,4,vstupDioda);
   zahraj(d,4,vstupDioda);
   zahraj(d,4,vstupDioda);
   zahraj(d,4,vstupDioda);
}
 else{
   noTone(8);
  }
}
