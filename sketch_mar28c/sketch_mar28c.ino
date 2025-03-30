const int ledPin = 13;
const int buttonPin = 2;

bool ledDurumu = false;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(buttonPin) == LOW) {  //butona basıldımı? 
        ledDurumu = !ledDurumu;  //basıldıysa led durumunu terse cevır 
        digitalWrite(ledPin, ledDurumu); //lede yazdır
        delay(200); // Buton sıçramasını önlemek için
    }
}
