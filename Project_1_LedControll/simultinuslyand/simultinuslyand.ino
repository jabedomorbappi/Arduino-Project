#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

 int myPins[] = {1,2, 3,4,5,6,7, 8,9, 10,11,12,13};


int i,j;
void initAllLeds()
{
  for (i=0; i<13;  i++)
  {
    pinMode(myPins[i],OUTPUT);
    
  }
}


void powerOnAllLeds(bool poweron)
{
  for (j=0;j<13;j++)
  {
    if (poweron)
    {
      digitalWrite(myPins[j],HIGH);
    }
    else{
      digitalWrite(myPins[j],LOW);
    }
  }
}


void oneByOne()
{
  for (i=0;i<13;i++)
  {
    digitalWrite(myPins[i],HIGH);
    delay(40);
    delay(40);
  }
}

  void setup()
  {
    initAllLeds();
  }

void loop()
{
  powerOnAllLeds(true);
  delay(100);
  powerOnAllLeds(false);
  delay(100);


  oneByOne();
}
