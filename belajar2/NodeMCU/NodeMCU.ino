
#define BLYNK_PRINT Serial //digunakan unutuk monitor blynk di serial


#include <ESP8266WiFi.h> //file untuk modul wifi
#include <BlynkSimpleEsp8266.h> //file untuk blynk

char auth[] = "YourAuthToken"; //char yang dikirim oleh blynk

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "YourNetworkName";
char pass[] = "YourPassword";

void setup()// fungsi utama di jalankan sekali
{
  // Debug console
  Serial.begin(9600); 

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();
}
