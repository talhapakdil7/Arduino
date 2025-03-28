#define LED_CIKIS 13


void setup() {
  pinMode(3,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:


int okunanDeger= digitalRead(3);


if(okunanDeger==1)
{

  digitalWrite(LED_CIKIS,1);
}
else{

digitalWrite(LED_CIKIS,0);
}


}
