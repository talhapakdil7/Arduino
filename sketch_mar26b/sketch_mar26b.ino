void setup() {
  

   pinMode(LED_BUILTIN,OUTPUT); //13. pini cıkıs yaptık
   Serial.begin(9600);

}

void loop() {
  

  digitalWrite(LED_BUILTIN,HIGH);
  delay(2000);
   digitalWrite(LED_BUILTIN,LOW);
   delay(1000);
   Serial.println("B");

   int okunanDeger = analogRead(A0);
   Serial.println(okunanDeger);
   

}
