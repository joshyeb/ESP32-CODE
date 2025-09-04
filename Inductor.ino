
const int signalPin = 9;      // PWM output pin to generate AC-like signal
const int sensorPin = A0;     // Analog pin to measure voltage across inductor
int signalValue = 0;

void setup() {
  Serial.begin(9600);          // Start serial communication
  pinMode(signalPin, OUTPUT);  // Set pin as output
  pinMode(sensorPin, INPUT);   // Set pin as input
  Serial.println("RL Circuit Experiment Started...");
}

void loop() {
  // Generate square wave signal (simulate AC)
  digitalWrite(signalPin, HIGH);
  delay(10); // High for 10ms
  digitalWrite(signalPin, LOW);
  delay(10); // Low for 10ms

  // Read voltage across inductor
  signalValue = analogRead(sensorPin);

  // Convert to actual voltage (assuming 5V reference, 10-bit ADC)
  float voltage = (signalValue * 5.0) / 1023.0;

  // Print result
  Serial.print("Inductor Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(100); // Small delay for readability
}
