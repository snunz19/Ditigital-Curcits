void setup()
{
  pinMode(13,OUTPUT);//This allows 13 to source a lot of electricity
}
void loop()
{
  digitalWrite(13,HIGH);
  delay(10);//Don't brick your arduino
}
