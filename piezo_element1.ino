"https://www.tinkercad.com/things/6FprLqKoJNl-piezo-element"

const int BUTTON_PIN = 7; // Arduino pin connected to button's pin
const int BUZZER_PIN = 3; // Arduino pin connected to Buzzer's pin

void setup() {
Serial.begin(9600); // initialize serial with baud rate 9600
pinMode(BUTTON_PIN, INPUT_PULLUP); // set Arduino pin to input pull-up mode
pinMode(BUZZER_PIN, OUTPUT); // set Arduino pin to output mode
}

void loop() {
int buttonState = digitalRead(BUTTON_PIN); // read new state
if (buttonState == LOW) {
Serial.println("The button is being pressed");
digitalWrite(BUZZER_PIN, HIGH); // turn on the buzzer
}
else {
Serial.println("The button is unpressed");
digitalWrite(BUZZER_PIN, LOW); // turn off the buzzer
}
}