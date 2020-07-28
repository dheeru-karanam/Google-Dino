#include <Servo.h>
int apin = A0;
int val = 0;
int i=0;
Servo myser;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myser.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  apin = analogRead(apin);
  Serial.println(apin);
  if(apin>0){
    for(i=0;i<180;i++){
      myser.write(i);
      delay(10);
    }
    for(i=180;i>=0;i--){
      myser.write(i);
      delay(10);
    }
  }
}
