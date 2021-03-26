void setup() {
  // bir kez çalıştırmak için kurulum kodunuzu buraya koyuyoruz:
pinMode(7, OUTPUT);    //burada çıkış pinlerimizi belirtiriyoruz mesela bu 7.pin:
pinMode(8, OUTPUT);    //burada çıkış pinlerimizi belirtiriyoruz mesela bu 8.pin:
pinMode(5, OUTPUT);    //burada çıkış pinlerimizi belirtiriyoruz mesela bu 5.pin:
pinMode(4, OUTPUT);    //burada çıkış pinlerimizi belirtiriyoruz mesela bu 4.pin:
}

void loop() {
  // sürekli tekrar edilen kodlar buraya yazılıcaktır:
digitalWrite(7, HIGH);  //burada ledin high yani yüksek duruma gelip yanıyor :
delay(50);      //50 milisaniye bekliyoruz :
digitalWrite(7, LOW);   //burada ledin low yani düşük duruma gelip sönüyor:
delay(100);     //100 milisaniye bekliyoruz :

digitalWrite(8, HIGH); //burada ledin high yani yüksek duruma gelip yanıyor :
delay(100);     //100 milisaniye bekliyoruz :
digitalWrite(8, LOW);  //burada ledin low yani düşük duruma gelip sönüyor:
delay(100);     //100 milisaniye bekliyoruz :

digitalWrite(5, HIGH);  //burada ledin high yani yüksek duruma gelip yanıyor :
delay(100);    //100 milisaniye bekliyoruz fakat buradaki led 100 milisaniye yanıp sönücektir :

digitalWrite(4, HIGH);   //burada ledin high yani yüksek duruma gelip yanıyor :
delay(100);   //100 milisaniye bekliyoruz fakat buradaki led 100 milisaniye yanıp sönücektir :


}
