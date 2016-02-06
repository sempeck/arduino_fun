#define DATA 6
#define LATCH 8
#define CLOCK 10

int digits[] = { 3, 159, 37, 13, 153, 73, 65, 31, 1, 9};

void setup() {
	Serial.begin(9600);
	pinMode(LATCH, OUTPUT);
	pinMode(CLOCK, OUTPUT);
	pinMode(DATA, OUTPUT);
}

void loop() {

	int i;
	for (i=0;i<10;i++) {
		digitalWrite(LATCH,LOW);
		shiftOut(DATA,CLOCK,LSBFIRST,digits[i]);
		digitalWrite(LATCH,HIGH);
		Serial.println(digits[i]);
		delay(500);
	}
	for (i=10;i>0;i--) {
		digitalWrite(LATCH,LOW);
		shiftOut(DATA,CLOCK,LSBFIRST,digits[i]-1);
		digitalWrite(LATCH,HIGH);
		delay(500);
	}
}
