#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

int pos1 = 90;
int pos2 = 90;
int pos3 = 90;
int pos4 = 150;

int odstep = 15;

void setup() {
  myservo1.attach(8);
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11);
}

void loop() {
  for (pos4 = 150; pos4 >= 140; pos4 -= 1) 
  {
    myservo4.write(pos4);
    delay(odstep);
  }
  for (pos2 = 90; pos2 <= 150; pos2 += 1) 
  {
    myservo2.write(pos2);
    delay(odstep);
  }
  for (pos3 = 90; pos3 >= 60; pos3 -= 1) 
  {
    myservo3.write(pos3);
    delay(odstep);
  }
  for (pos4 = 140; pos4 <= 155; pos4 += 1) 
  {
    myservo4.write(pos4);
    delay(odstep);
  }
  for (pos3 = 60; pos3 <= 75; pos3 += 1) 
  {
    myservo3.write(pos3);
    delay(odstep);
  }
  for (pos2 = 150; pos2 >= 90; pos2 -= 1) 
  {
    myservo2.write(pos2);
    delay(odstep);
  }
  for (pos3 = 75; pos3 <= 150; pos3 += 1) 
  {
    myservo3.write(pos3);
    delay(odstep);
  }
  for (pos2 = 90; pos2 >= 50; pos2 -= 1) 
  {
    myservo2.write(pos2);
    delay(odstep);
  }
  for (pos1 = 90; pos1 >= 0; pos1 -= 1) 
  {
    myservo1.write(pos1);
    delay(odstep);
  }
  for (pos2 = 50; pos2 <= 80; pos2 += 1) 
  {
    myservo2.write(pos2);
    delay(odstep);
  }
  for (pos3 = 150; pos3 >= 90; pos3 -= 1) 
  {
    myservo3.write(pos3);
    delay(odstep);
  }
  for (pos2 = 80; pos2 <= 150; pos2 += 1) 
  {
    myservo2.write(pos2);
    delay(odstep);
  }
  for (pos3 = 90; pos3 >= 60; pos3 -= 1) 
  {
    myservo3.write(pos3);
    delay(odstep);
  }
  for (pos4 = 155; pos4 >= 140; pos4 -= 1) 
  {
    myservo4.write(pos4);
    delay(odstep);
  }
  for (pos3 = 60; pos3 >= 40; pos3 -= 1) 
  {
    myservo3.write(pos3);
    delay(odstep);
  }
  for (pos2 = 150; pos2 >= 120; pos2 -= 1) 
  {
    myservo2.write(pos2);
    delay(odstep);
  }
  for (pos3 = 40; pos3 <= 90; pos3 += 1) 
  {
    myservo3.write(pos3);
    delay(odstep);
  }
  for (pos2 = 120; pos2 >= 90; pos2 -= 1) 
  {
    myservo2.write(pos2);
    delay(odstep);
  }
  for (pos4 = 140; pos4 <= 150; pos4 += 1) 
  {
    myservo4.write(pos4);
    delay(odstep);
  }
  for (pos1 = 0; pos1 <= 90; pos1 += 1) 
  {
    myservo1.write(pos1);
    delay(odstep);
  }
}
