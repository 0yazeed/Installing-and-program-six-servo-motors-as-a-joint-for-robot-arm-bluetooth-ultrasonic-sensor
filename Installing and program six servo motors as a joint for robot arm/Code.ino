#include <Servo.h>

  Servo servo1;             //variables declaration
  Servo servo2;
  Servo servo3;
  Servo servo4;
  Servo servo5;
  Servo servo6;
void setup() {
servo1.attach(11);           //ports declaration
servo2.attach(10);
servo3.attach(9);
servo4.attach(6);
servo5.attach(5);
servo6.attach(3);

}

void loop() {
  int servo1_1=0, servo1_2=0, servo1_3=0, servo2_1=0, servo2_2=0, servo2_3=0; //start point (Here where the mechanical engineer will set a appropriate degree(0-180)
 servo1.write(servo1_1);   
 servo2.write(servo1_2);
 servo3.write(servo1_3);
 servo4.write(servo2_1);
 servo5.write(servo2_2);
 servo6.write(servo2_3);
 delay(5000);


 servo1_1=120; servo1_2=135; servo1_3=90; servo2_1=120; servo2_2=135; servo2_3=90; // Here where the mechanical engineer will set a appropriate degree for robot motion(0-180)
 servo1.write(servo1_1);   
 servo2.write(servo1_2);
 servo3.write(servo1_3);
 servo4.write(servo2_1);
 servo5.write(servo2_2);
 servo6.write(servo2_3);





