#include <Servo.h>

Servo myservo1;  
Servo myservo2;  
Servo myservo3;  
Servo myservo4;
void setup() {
  myservo1.attach(3); 
  myservo2.attach(5); 
  myservo3.attach(6); 
  myservo4.attach(9); 


     
delay (1000);
   myservo2.write (50);     
  delay (1000);
   myservo3.write (170);     
delay (1000);s
  myservo4.write (170);     
delay (1000);
myservo1.write (50);     
delay (1000);
  myservo3.write (160);     
delay (1000);
myservo1.write (100);     
delay (1000);
myservo3.write (70);     
delay (1000);
 myservo4.write (50);     
delay (1000);
myservo3.write (130);     
delay (1000);
myservo1.write (70);     
delay (1000);
}


//3 = 1nahore
//5 = 2zezhora
//6 = 3zezhora
//9 = 4zezhora
void loop() { 
  
  }
