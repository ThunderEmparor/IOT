"https://www.tinkercad.com/things/2EfSqFPpsu7-sq-number"

int out;
void setup()  
{ 
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps 
} 
void loop() 
{ 
  // send data only when you receive data: 
  if (Serial.available() > 0)    
  { 
    // read the incoming byte: 
    int num=Serial.readString().toInt(); 
    // say what you got: 
	Serial.print("I received: ");
    Serial.println(num);
    out = num*num; 
	Serial.print("Sq of no.: "); 
	Serial.println(out);  
  } 
} 
