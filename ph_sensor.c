/*
    Project name : PH Sensor
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-ph-sensor
*/

const int pHSensorPin = A0; // Analog pin connected to the pH sensor module

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog voltage from pH sensor
  int sensorValue = analogRead(pHSensorPin);
  
  // Convert analog value to pH value (example calibration)
  float pHValue = map(sensorValue, 0, 1023, 0, 14); // Assuming pH sensor output is between 0-14 pH
  
  // Print pH value to Serial Monitor
  Serial.print("pH Value: ");
  Serial.println(pHValue, 2); // Print with 2 decimal places
  
  delay(1000); // Delay for one second before the next reading
}
