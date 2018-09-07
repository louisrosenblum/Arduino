void setup() {

  Serial.begin(9600);

  tone(4,3000,500);
  delay(500);

  pinMode(9, OUTPUT); //IR LED
  pinMode(10, INPUT); // IR detector

}

void loop() {
  tone(9,38000,8);
  delay(1);
  byte irDetect = digitalRead(10);
  delay(100);
  Serial.println(irDetect);

}
