"https://www.tinkercad.com/things/fGOimT7wb0A-led-blink-using-serial-monitor"

// Define pin numbers for each LED
const int bluePin = 7;
const int greenPin = 8;
const int yellowPin = 9;
const int redPin = 10;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Set pinMode for each LED pin as OUTPUT
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // Check if there's incoming serial data
  if (Serial.available() > 0) {
    // Read the incoming byte
    char receivedChar = Serial.read();
    
    // Check the value of the received character
    switch (receivedChar) {
      case 'b':
        illuminateLED(bluePin);
        break;
      case 'g':
        illuminateLED(greenPin);
        break;
      case 'y':
        illuminateLED(yellowPin);
        break;
      case 'r':
        illuminateLED(redPin);
        break;
      default:
        // Do nothing if an invalid character is received
        break;
    }
  }
}

// Function to illuminate a specific LED
void illuminateLED(int pin) {
  // Turn off all LEDs first
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
  
  // Turn on the specified LED
  digitalWrite(pin, HIGH);
}
