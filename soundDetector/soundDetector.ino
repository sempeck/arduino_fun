int mic = 2;
int led = 8;

boolean lastMic = LOW;
boolean nowMic = LOW;
boolean lampON = false;

void setup() {
	pinMode(mic, INPUT);
	pinMode(led, OUTPUT);
}

void loop() {
	nowMic = digitalRead(mic);
	if (lastMic==LOW && nowMic==HIGH) {
		lampON = !lampON;
	}
	lastMic=nowMic;
	digitalWrite(led, lampON);
}
