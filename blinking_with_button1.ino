"https://www.tinkercad.com/things/1OnC0vSlFBf-blinking-with-button"

// C++ code
//
int ledpin=13;
int switchpin=9;

int value=0;
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(switchpin,INPUT);
}

void loop()
{
  value=digitalRead(switchpin);
  if (value ==  HIGH)
  {
    digitalWrite(ledpin,HIGH);
  } else{
    digitalWrite(ledpin,LOW);
  }
    
 
}