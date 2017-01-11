// A0 to a voltage divider between a potentiometer and resistor
// pin 5 and 6 to led + resistor
void setup {
	pinMode(A0, INPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
}

void loop {
	int potValue = analogRead(A0) / 4;

	analogWrite(5, potValue);
	analogWrite(6, 255 - potValue)
}
