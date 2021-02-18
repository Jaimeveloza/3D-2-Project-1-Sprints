// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 3; 
// Create a servo object 
Servo Servo1; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
}
void loop(){ 
   // Make servo go to 0 degrees 
   Servo1.write(-270); 
   delay(200); 
//   // Make servo go to 90 degrees 
//   Servo1.write(90); 
//   delay(500); 
   // Make servo go to 180 degrees 
   Servo1.write(180); 
   delay(200); 
   
   Servo1.write(174); 
   delay(500); 
 
 

   Servo1.write(169);
   Servo1.write(165); 
   delay(500); 
   Servo1.write(160); 
   delay(500); 
   Servo1.write(155); 
   delay(500); 
   Servo1.write(145); 
   delay(500); 
   Servo1.write(140); 
   delay(500); 
   Servo1.write(135); 
   delay(500); 
   Servo1.write(130); 
   delay(500); 
   Servo1.write(125); 
   delay(500); 
   Servo1.write(120); 
   delay(500);
   Servo1.write(115); 
   delay(500);  
   Servo1.write(110); 
   delay(500); 
   Servo1.write(105); 
   delay(500); 
   Servo1.write(100); 
   delay(500); 
   Servo1.write(95); 
   delay(500); 
   Servo1.write(90); 
   delay(500); 
   
    Servo1.write(0); 
   delay(200);
   Servo1.write(360); 
   delay(200); 
   Servo1.write(0); 
   delay(200);
   Servo1.write(-270); 
   delay(200); 
    Servo1.write(180); 
   delay(200); 
   Servo1.write(-270); 
   delay(200); 
    Servo1.write(180); 
   delay(200); 
   Servo1.write(-270); 
   delay(200); 
    Servo1.write(180); 
   delay(200); 
}
