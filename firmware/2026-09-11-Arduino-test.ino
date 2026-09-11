void setup() {
  Serial.begin(9600);
  Serial.println("Robot - Arduino OK");
}

void loop() {
  Serial.println("Arduino fonctionne !");
  delay(1000);
}