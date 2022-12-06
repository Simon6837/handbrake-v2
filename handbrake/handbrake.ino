#include <Joystick.h>
// Create the Joystick
Joystick_ Joystick (0x04, JOYSTICK_TYPE_JOYSTICK,
0, 0, //button count, hat switch
false, false, false, //X Y and Z axis
false, false, false, //Rx Ry and Rz axis
false, false, //rudder and throttle
false, true, false //accelerator, brake, steering
);
void setup() {
  pinMode(A0, INPUT);
	Joystick.begin();
}

void loop() {
  Joystick.setBrake(map(analogRead(A0), 0, 1023, 0, 255));
}