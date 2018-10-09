int redPin = 12;                  // Red LED connected to digital pin 12
int greenPin = 11;                // Green LED connected to digital pin 11
int switchPin = 10;               // Input pin for switch

void setup()                      // run once, when the sketch starts
{
//  Serial.begin(9600);           // set up Serial library at 9600 bps
  pinMode(redPin, OUTPUT);        // sets the digital pin as output
  pinMode(greenPin, OUTPUT);      // sets the digital pin as output
  pinMode(switchPin, INPUT);      // sets the digital pin as input
}

void loop()                       // run over and over again
{
//    Serial.print("Read switch input: ");
//    Serial.println(digitalRead(switchPin));    // Read the pin and display the value
    if (digitalRead(switchPin))
    {
      digitalWrite(redPin, HIGH);     // sets the Red LED on
      digitalWrite(greenPin, LOW);   // sets the Green LED on
    } else {
      digitalWrite(redPin, LOW);      // sets the Red LED off
      digitalWrite(greenPin, HIGH);    // sets the Green LED off
    }
//    delay(100);
}
