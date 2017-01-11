void setup()
{
   pinMode(6, OUTPUT); // Attach pins 6 and 7 to signal
   pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);  // Go in one direction
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(6, LOW);  // Switch the direction
  digitalWrite(7, HIGH);
  delay(1000);
}
