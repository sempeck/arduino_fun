int r = 0;

void setup() {
	randomSeed(analogRead(0));
	Serial.begin(9600);

}

void loop() {
	Serial.print("Liczba losowa: ");
	r = random(1001);
	Serial.println(r);
	delay(1000);

}
