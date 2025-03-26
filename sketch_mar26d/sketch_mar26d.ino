void setup() {
 

  pinMode(7,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop() {
 
//int deger= digitalRead(7);

/*
if(deger==1) //butona basılı ise
{

digitalWrite(13,1);

}
else{
digitalWrite(13,0);

}*/


//ıkıncı yontem

//int deger= digitalRead(7);
//digitalWrite(13,deger);

//ucuncu yontem


digitalWrite(13,digitalRead(7));


}
