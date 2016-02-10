
#define LED 13

int blinks = 0;

void setup() {
	Serial.begin(9600);
	pinMode(LED, OUTPUT);
}

int checkTemp() {
	float voltage = 0;
	float celsius = 0;
	float hotTemp = 26;
	float coldTemp = 20;
	float sensor = 0;
	int result;

	sensor = analogRead(0);
	voltage = (sensor*5000)/1024;
	//voltage = voltage-500;
	celsius = voltage/10;
	Serial.println(sensor);
	Serial.println(celsius);

	if (celsius < coldTemp) {
		result = 2;
	}
	else if (celsius >= coldTemp && celsius <= hotTemp) {
		result = 4;
	}
	else {
		result = 6;
	}
	return result;
}

void blinkLED(int cycles, int del) {
	for (int z = 0; z < cycles; z++){
		digitalWrite(LED, HIGH);
		delay(del);
		digitalWrite(LED, LOW);
		delay(del);
	}
}

void loop() {
	blinks = checkTemp();
	blinkLED(blinks, 500);
	delay(2000);
	//Serial.println(blinks);

}
