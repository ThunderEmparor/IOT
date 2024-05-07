"https://www.tinkercad.com/things/fnMOCmZmRWB-blinking-of-different-leds"

int counter = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT); 
}  
void loop() 
{ 
  if(counter == 300) 
  { 
    counter=0;
  } 
  if(counter < 300) 
  { 
	Serial.println(counter); 
  } 
  counter = counter + 1;
  	delay(100);
  if(counter > 0 && counter < 100 ) 
  { 
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);   
  }  
  if(counter > 101 && counter < 200 )
  {
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);   
  }  
  if(counter > 201 && counter < 300 ) 
  { 
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);   
  } 
} 
