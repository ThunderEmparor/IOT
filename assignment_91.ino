"https://www.tinkercad.com/things/fUAnQg5LcpT-assignment-9"

// Define the pin to which the LM35 sensor is connected
const int sensorPin = A0;

// Variables to store minimum and maximum temperature
float minTemp = 1000; // Initial value set to a very high number
float maxTemp = -1000; // Initial value set to a very low number

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the LM35 sensor
  int sensorValue = analogRead(sensorPin);
  
  // Convert the analog value to voltage (0 to 5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Convert the voltage to temperature in Celsius
  float temperatureC = voltage * 100.0;
  
  // Convert temperature to Fahrenheit
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  
  // Print temperature in Fahrenheit
  Serial.print("Temperature (F): ");
  Serial.println(temperatureF);
  
  // Update minimum temperature if necessary
  if (temperatureF < minTemp) {
    minTemp = temperatureF;
    Serial.print("Minimum Temperature (F): ");
    Serial.println(minTemp);
  }
  
  // Update maximum temperature if necessary
  if (temperatureF > maxTemp) {
    maxTemp = temperatureF;
    Serial.print("Maximum Temperature (F): ");
    Serial.println(maxTemp);
  }
  
  // Delay for a short interval before taking the next temperature reading
  delay(1000);
}
