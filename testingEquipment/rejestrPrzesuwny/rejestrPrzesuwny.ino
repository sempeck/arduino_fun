#define DATA 6
#define LATCH 8
#define CLOCK 10

void setup() {
	Serial.begin(9600);
	pinMode(LATCH, OUTPUT);
	pinMode(CLOCK, OUTPUT);
	pinMode(DATA, OUTPUT);
}

void loop() {
	int i;
	for (i=0;i<256;i++) {
		digitalWrite(LATCH,LOW);
		shiftOut(DATA,CLOCK,MSBFIRST,i);
		digitalWrite(LATCH,HIGH);
		Serial.println(i);
		delay(500);
	}
}


