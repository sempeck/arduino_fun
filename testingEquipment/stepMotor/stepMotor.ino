#include <Stepper.h>

#define LEWY 2
#define PRAWY 1

int in1Pin = 8;
int in2Pin = 10; // change of pin order
int in3Pin = 9;
int in4Pin = 11;

Stepper motor(200, in1Pin, in2Pin, in3Pin, in4Pin);

void setup()
{
	Serial.begin(9600);
    pinMode(in1Pin, OUTPUT);
    pinMode(in2Pin, OUTPUT);
    pinMode(in3Pin, OUTPUT);
    pinMode(in4Pin, OUTPUT);

    pinMode(1,INPUT);
    pinMode(2,INPUT);

    motor.setSpeed(25);
}

void loop() {
	motor.step(0);

	//while (digitalRead(LEWY) == HIGH) {
    int steps = -90;
    motor.step(steps);
	//}

	// while (digitalRead(PRAWY) == HIGH) {
 //    int steps = -90;
 //    motor.step(steps);
	// }	
}