#define R 6
#define Y 4
#define G 2

int analogValue = 0;
float voltage = 0;

int d = 2000;

void setup() {
	pinMode(R, OUTPUT);
	pinMode(G, OUTPUT);
	pinMode(Y, OUTPUT);
}

void loop() {

	analogValue = analogRead(0);
	voltage = 0.0048*analogValue;

	if (voltage >= 1.6) {
		digitalWrite(G, HIGH);
		delay(d);
		digitalWrite(G, LOW);
	}
	else if (voltage < 1.6 && voltage > 1.4) {
		digitalWrite(Y, HIGH);
		delay(d);
		digitalWrite(Y, LOW);
	}
	else if (voltage <= 1.4) {
		digitalWrite(R, HIGH);
		delay(d);
		digitalWrite(R, LOW);
	}

}
