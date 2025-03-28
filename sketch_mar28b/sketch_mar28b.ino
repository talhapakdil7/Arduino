void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT_PULLDOWN);
pinMode(5,INPUT_PULLDOWN);

pinMode(13,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(3)==1)
{
digitalWrite(13, HIGH);


}

if(digitalRead(5)==1)
{

digitalWrite(13, LOW);

}






}
