void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Staring Whisker Program");

  pinMode(5, INPUT); // LEFT Whisker
  pinMode(7, INPUT); // RIGHT WHISKER
}

void loop() {
  // put your main code here, to run repeatedly:

  byte wLeft = digitalRead(5);
  byte wRight = digitalRead(7);

  if ( (wLeft  == 0) or (wRight == 0))
  {
    tone(4,1000,50);
    delay(50);
  }

  Serial.print(wLeft);
  Serial.print(wRight);
  delay(50);
  
}
