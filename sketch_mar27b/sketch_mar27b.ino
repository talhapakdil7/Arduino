long rnd; //long turunde degısken belırledık

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));  /*Arduino’da rastgele sayı üretimi için random() 
  fonksiyonunu kullanıyoruz. Ancak, bu fonksiyon tamamen rastgele (true random) değildir, 
  aslında belirli bir algoritmaya dayalı olarak sayı üretir.
Eğer Arduino'yu her açtığında aynı başlangıç değerini (seed) kullanırsan, 
üretilen rastgele sayılar her seferinde aynı sırayla olur. Bunu önlemek için 
randomSeed() kullanarak rastgelelik için bir başlangıç noktası belirleriz.*/
}

void loop() {
  // put your main code here, to run repeatedly:
  //0 ve 299 arasında sınırlar dahil
  rnd = random(300);
  Serial.println(rnd);

  // 10 ve 19 arasında sınırlar dahil
  rnd = random(10, 20);
  Serial.println(rnd);
  Serial.println(analogRead(0));
  Serial.println();

  delay(1000);
}