#define R 1
#define G 2
#define B 3

void setup() {
	pinMode(R, OUTPUT);
	pinMode(G, OUTPUT);
	pinMode(B, OUTPUT);
}

void loop() {
	digitalWrite(R,HIGH);
	delay(500);
	digitalWrite(R,LOW);
	delay(500);
	digitalWrite(G, HIGH);
	delay(500);
	digitalWrite(G,LOW);
	delay(500);
	digitalWrite(B, HIGH);
	delay(500);
	digitalWrite(B,LOW);
	delay(500);
}
