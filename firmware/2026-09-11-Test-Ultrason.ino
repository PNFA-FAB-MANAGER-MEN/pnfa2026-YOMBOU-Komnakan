const int TRIG_PIN = 9;
const int ECHO_PIN = 10;

void setup() {
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  digitalWrite(TRIG_PIN, LOW);
}

void loop() {
  // Envoyer une impulsion ultrasonique
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  // Mesurer le temps de retour
  long duree = pulseIn(ECHO_PIN, HIGH);

  // Calculer la distance en cm
  float distance = duree * 0.0343 / 2;

  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}