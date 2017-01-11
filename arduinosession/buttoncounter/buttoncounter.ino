// counts the number of times a button is pressed
// pull down resistor to pin 4 to button to 5v
void setup {
	pinMode(4, INPUT);
	Serial.begin(9600);
}

int counter = 0;
boolean switchWasOn = false;
void loop {
	boolean switchOn = (digitalRead(4) == HIGH);
	if(switchOn ^ switchWasOn) {
		if(switchWasOn)
			counter++;
		switchWasOn = switchOn;
		Serial.println(counter);
	}
}
