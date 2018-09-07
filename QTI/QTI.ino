void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Testing QTI Sensor");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //Charge capacitor for 1ms
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  delay(1);
  pinMode(1, OUTPUT);
  digitalWrite(1, HIGH);
  delay(1);
  // Wait 1 ms and let capacitor discharge
  pinMode(2,INPUT);
  delay(1);
  pinMode(1,INPUT);
  delay(1);

  // read pin 2
//  byte sensor1 = digitalRead(2);
//  Serial.println(sensor1);
//  delay(50);

//  // read pin 1
  byte sensor2 = digitalRead(1);
  Serial.println(sensor2);
  delay(50);
  
}
