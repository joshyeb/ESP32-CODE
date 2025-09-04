
const int capPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float voltage = analogRead(capPin) * (5.0 / 1023.0);
  Serial.println(voltage);
  delay(100); // sample every 0.1s
}
