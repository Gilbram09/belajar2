void setup() {
  /*semua program di void akan di jalankan sekali saja*/
  Serial.begin(9600);
  Serial.println("Welcome To Idn Boarding School");
}

void loop() {
  /*semua program di loop akan di jalankan berkali - kali secara berkala*/
  Serial.println("Welcome to Idn");
  delay(1000);
}
