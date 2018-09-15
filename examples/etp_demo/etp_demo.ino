#include "EnoughTimePassed.h"
#define LEDPIN 5

EnoughTimePassed etp_1(1000);

void setup()
{
  pinMode(LEDPIN,OUTPUT);
  digitalWrite(LEDPIN,false);
}

void loop()
{
  if (etp_1.enough_time())
    digitalWrite(LEDPIN,!digitalRead(LEDPIN));
}
