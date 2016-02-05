#define B 3

int d = 300;

void setup() {
	pinMode(B, OUTPUT);
}

void loop() {
	analogWrite(B, 128);
	delay(d);
	analogWrite(B, 256);
	delay(d);
	digitalWrite(B, LOW);
	delay(d);
}
