#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define OP 9
#define X 10

byte a1[] = {X, B, C, D, E, X, X, OP};

void setup() {
	pinMode(A, INPUT);
	pinMode(B, OUTPUT);
	pinMode(C, OUTPUT);
	pinMode(D, OUTPUT);
	pinMode(E, OUTPUT);
	pinMode(F, OUTPUT);
	pinMode(G, OUTPUT);
	pinMode(OP, OUTPUT);
}	

void loop() {
	int i;
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(OP, HIGH);


//	for (i=0;i<8;i++) {
//		digitalWrite(a1[i], HIGH);
//	}
}


// #define DATA 6
// #define LATCH 8
// #define CLOCK 10

// int digits[] = { 3, 159, 37, 13, 153, 73, 65, 31, 1, 9};

// void setup() {
// 	Serial.begin(9600);
// 	pinMode(LATCH, OUTPUT);
// 	pinMode(CLOCK, OUTPUT);
// 	pinMode(DATA, OUTPUT);
// }

// void loop() {

// 	int i;
// 	for (i=0;i<10;i++) {
// 		digitalWrite(LATCH,LOW);
// 		shiftOut(DATA,CLOCK,LSBFIRST,digits[i]);
// 		digitalWrite(LATCH,HIGH);
// 		Serial.println(digits[i]);
// 		delay(500);
// 	}
// 	for (i=10;i>0;i--) {
// 		digitalWrite(LATCH,LOW);
// 		shiftOut(DATA,CLOCK,LSBFIRST,digits[i]-1);
// 		digitalWrite(LATCH,HIGH);
// 		delay(500);
// 	}
// }
