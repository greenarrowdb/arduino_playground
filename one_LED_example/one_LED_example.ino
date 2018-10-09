
void setup()                  // run once, when the sketch starts
{
  pinMode(12, OUTPUT);        // sets the digital pin as output
}

void loop()                   // run over and over again
{
  digitalWrite(12, HIGH);     // sets the Red LED on
  delay(500);                 // waits for half a second
  digitalWrite(12, LOW);      // sets the Red LED off
  delay(500);                 // waits for half a second
}
