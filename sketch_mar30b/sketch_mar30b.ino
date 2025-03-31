
int delayTime = 500;       // Başlangıçta 500ms yanıp sönme süresi
const int minDelay = 100;  // Minimum süre (daha hızlı yanıp sönme)
const int maxDelay = 2000; // Maksimum süre (daha yavaş yanıp sönme)



void setup() {
  pinMode(16,OUTPUT);
  pinMode(3,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);


}

void loop() {
  
digitalWrite(16,HIGH);
delay(delayTime);
digitalWrite(16,LOW);
delay(delayTime);



  int button1=digitalRead(3);
  int button2=digitalRead(6);
    

  if(button1==0)
  {

    delayTime-=100;

    if(delayTime<100){


      delayTime=minDelay;
    }



  }

if(button2==0)
  {

    delayTime+=100;

    if(delayTime>2000){


      delayTime=maxDelay;
    }



  }



}
