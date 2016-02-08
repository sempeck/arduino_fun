// piezo
#define POTENCJOMETR 0
#define PIEZO 2

void setup() {
	Serial.begin(9600);
}

void loop() {
	int value = analogRead(POTENCJOMETR);
	tone(PIEZO,value);
	Serial.println(value);
}


// dioda
// #define POTENCJOMETR 0
// #define LED 3

// void setup() {
// 	pinMode(LED, OUTPUT);
// }

// void loop() {
// 	int value = analogRead(POTENCJOMETR);
// 	byte bright = map(value, 0, 1023, 0, 255);
// 	analogWrite(LED, bright);
// }
