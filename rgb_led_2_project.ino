//Ortak Anot RGB LED için Arduino Kodu
//RGB LED'imizin bacaklarını Arduino'da bağladığımız pinlere göre global değişken olarak atadım.
int kirmiziPin = 6; //Kırmızı bacak 6 numaralı pine bağlıyoruz
int yesilPin = 5; //yeşil bacak 5 numaralı pine bağlıyoruz
int maviPin = 3; //mavi bacak 3 numaralı pine bağlıyoruz
void setup(){ 
  pinMode(kirmiziPin, OUTPUT); //kirmiziPin(9) çıkış pini olarak atadım
  pinMode(yesilPin, OUTPUT); //yesilPin(10) çıkış pini olarak atadım
  pinMode(maviPin, OUTPUT);} //mavi(11) çıkış pini olarak atadım
  
  void loop(){ 
    renkAyarla(255, 0, 0); //kırmızı renk değeri 
    delay(1500); //1.5 saniye bekliyoruz
    renkAyarla(0, 255, 0); //yeşil renk değeri
    delay(1500); //1.5 saniye bekliyoruz
    renkAyarla(0, 0, 255); //mavi renk değeri
    delay(1500); //1.5 saniye bekliyoruz
    renkAyarla(255, 255, 0); //sarı renk değeri
    delay(1500); //1.5 saniye bekliyoruz
    renkAyarla(80, 0, 80); //mor renk değeri
    delay(1500); //1.5 saniye bekliyoruz
    renkAyarla(0, 255, 255); //açık mavi renk değeri
    delay(1500); //1.5 saniye bekliyoruz
    renkAyarla(255, 255, 255); //beyaz renk değeri
    delay(1500); //1.5 saniye bekliyoruz
    }
    
//Renk ayarla fonksiyonu oluşturdum
void renkAyarla(int kirmizi, int yesil, int mavi){ 
  kirmizi = 255-kirmizi; 
  yesil = 255-yesil; 
  mavi = 255-mavi; 
  analogWrite(kirmiziPin, kirmizi); 
  analogWrite(yesilPin, yesil); 
  analogWrite(maviPin, mavi);
  }
