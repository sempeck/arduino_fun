// stopniowe gaśnięcie diody

int d = 5;
int tablica[5] = {3,5,6,10,11};


void setup() {
	pinMode(2, OUTPUT);

	for (int z = 0; z < 5; z++) {
		pinMode(tablica[z], OUTPUT);		
	}
}

void loop() {

	digitalWrite(2, HIGH);

	for ( int x = 0; x < 5; x++ ) {		
		
		for (int a = 0; a < 256; a++ ) {
			analogWrite(tablica[x], a);
			delay(d);
		}

		for (int a = 255; a >= 0; a-- ) {
			analogWrite(tablica[x], a);
			delay(d);
		}
		delay(0);}

}
