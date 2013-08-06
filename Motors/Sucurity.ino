#include <Servo.h> 

Servo pikachiu;
Servo servz;
int command = 0;


void setup()
{
  pikachiu.attach(9);
  servz.attach(10);

  Serial.begin(9600);  

}

void loop()
{

  pikachiu.write(90);
  servz.write(90);
  delay(1000);
  
  pikachiu.write(0);
  delay(1000);
    pikachiu.write(180);
  delay(1000);
  
   pikachiu.write(90);
  servz.write(90);
  delay(1000);
  
   pikachiu.write(0);
   delay(1000);
  servz.write(180);
  delay(1000);
  
}

