#include <Stepper.h>

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

    motor.setSpeed(25);
}

void loop()
{
    int steps = 360;
    motor.step(steps);
    Serial.println(steps);
    delay(100);

    steps = -360;
    motor.step(steps);
        Serial.println(steps);
    delay(500);
}