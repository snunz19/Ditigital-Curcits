#include <Servo.h> 

Servo pikachiu;

int command = 0;


void setup()
{
  servz.attach(9);

  Serial.begin(9600);  

}

void loop()
{
  if( Serial.available() ) 
  {
      command = Serial.parseInt();
      if (command  == 1 )
      {
            scanUp(10,180,10);
       scanUp(50,180,100);
      }
     if (command > 1)
      {
      pikachiu.write(command);

      }
  }
  delay(10);
}

void scanUp(int thebegin, int theend, int slowness)
{
  for(int i = thebegin ; i < theend; i++)
  {
  pikachiu.write(i);
  delay(slowness);
  
  }
  void scanDown(int begin, int end, int slowness)
{
  for(int i = begin ; i > end; i--)
  {
  pikachiu.write(i);
  delay(slowness);
  
  }
}
