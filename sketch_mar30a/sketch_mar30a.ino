void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

  for(int i = 15; i <= 18; i++) {
    pinMode(i, OUTPUT);
  }

  pinMode(6,INPUT_PULLUP);
  
}

void ledSondur() {
  for(int i = 15; i <= 18; i++) {
    digitalWrite(i, 0);
  }

}

void loop() {
  

  int btnDeger = digitalRead(6);

  if (btnDeger == 0) { // Butona basıldığında
    int rnd = random(15, 19); // 15 ile 18 arasında rastgele bir pin seç
    Serial.println(rnd);

    ledSondur(); // Önce tüm LED'leri kapat
    digitalWrite(rnd, 1); // Rastgele seçilen pini aç

    delay(500);
  } else {
    ledSondur(); // Buton bırakıldığında LED'leri kapat
  }
}
