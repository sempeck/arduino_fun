#define DATA 6
#define LATCH 8
#define CLOCK 10

int number = 0;
int answer = 0;

void setup() {
	Serial.begin(9600);
	pinMode(LATCH, OUTPUT);
	pinMode(CLOCK, OUTPUT);
	pinMode(DATA, OUTPUT);
	randomSeed(analogRead(0));
	displayNumber(0);
}

void displayNumber(byte a) {
	digitalWrite(LATCH, LOW);
	shiftOut(DATA, CLOCK, MSBFIRST, a);
	digitalWrite(LATCH,HIGH);
	}

void getAnswer() {
	int z = 0;
	Serial.flush();
	while (Serial.available() == 0) {}
	while (Serial.available() > 0) {
		answer = answer * 10;
		z = Serial.read() - '0';
		answer = answer + z;
		delay(5);
	}
	Serial.print("Wpisana liczba: ");
	Serial.println(answer);                    
}

void checkAnswer() {
	if (answer == number) {
		Serial.println("Prawidlowa odpowiedz!");
		Serial.print(answer, BIN);
		Serial.print(" to ");
		Serial.println(number);
		Serial.println();
	}
	else {
		Serial.println("Bledna odpowiedz!");
		Serial.print(number, BIN);
		Serial.print(" to ");
		Serial.println(number);
		Serial.println();	
	}
	answer = 0;
	delay(2000);
}

void loop() {
	number = random(256);
	displayNumber(number);
	Serial.println("Ile wyniesie ta liczba binarna w systemie dziesietnym?");
	getAnswer();
	checkAnswer();
	}



