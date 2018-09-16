#include <SoftwareSerial.h>

SoftwareSerial espserial(2,3);

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  espserial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(espserial.available())
  {
    int state = espserial.parseInt();
    if(state == 11)
    {
      digitalWrite(13, HIGH);
    }
    else if(state==10)
    {
      digitalWrite(13, LOW);
    }
        if(state == 21)
    {
      digitalWrite(12, HIGH);
    }
    else if(state==20)
    {
      digitalWrite(12, LOW);
    }
  }
}
