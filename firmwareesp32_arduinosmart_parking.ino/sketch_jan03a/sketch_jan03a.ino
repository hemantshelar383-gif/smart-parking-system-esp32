/*
 Smart Parking System using ESP32
 Author: Hemant
 Platform: Arduino IDE
*/

#define TRIG_PIN 5
#define ECHO_PIN 18

#define GREEN_LED 2   // Slot Available
#define RED_LED 4     // Slot Occupied

long duration;
float distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  Serial.begin(115200);
  delay(1000);

  Serial.println("SMART PARKING SYSTEM STARTED");
}

void loop() {

  // Trigger ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read echo time
  duration = pulseIn(ECHO_PIN, HIGH, 30000);

  // Calculate distance
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance < 15) {
    // Slot occupied
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);

    Serial.println("STATUS: SLOT OCCUPIED 🚗");
  } else {
    // Slot available
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);

    Serial.println("STATUS: SLOT AVAILABLE ✅");
  }

  Serial.println("--------------------------------");
  delay(1000);
}
