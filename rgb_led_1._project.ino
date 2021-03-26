int R=5;  // kırmızıyı 5. pin olarak belirliyoruz
int G=3; //  yeşili 3. pin olarak belirliyoruz 
int B=6; //  maviyi 6. pin olarak belirliyoruz
 
void setup() {
pinMode(R,OUTPUT);  //R 5. pin olacağından dolayı 5. pine güç veriyoruz :
pinMode(G,OUTPUT);  //G 3. pin olacağından dolayı 3. pine güç veriyoruz :
pinMode(B,OUTPUT);  //B 6. pin olacağından dolayı 6. pine güç veriyoruz :
}
 
void loop() {
int rDeger=random(0,255); // burada kırmızı renk olan pine random bir değer veriyoruz 0 ile 255 arası:
int gDeger=random(0,255); // burada yeşil renk olan pine random bir değer veriyoruz 0 ile 255 arası:
int bDeger=random(0,255); // burada mavi renk olan pine random bir değer veriyoruz 0 ile 255 arası:
analogWrite(R,rDeger); // buradada ledleri yskıyoruz :
analogWrite(G,gDeger); // buradada ledleri yskıyoruz :
analogWrite(B,bDeger); // buradada ledleri yskıyoruz :
delay(1000); //1000 milisaniye bekliyoruz siz isterseniz 500 veya 100 yapabilirsiniz:
}
