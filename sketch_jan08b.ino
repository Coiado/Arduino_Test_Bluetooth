// include the library code:
#include <SoftwareSerial.h>

char inbyte;    //Setting a char variable as inbyte
int LED = 13;   //LED on pin 13
 
void setup(){

  // initialize the serial communications:
  Serial.begin(9600);
  digitalWrite(LED, LOW);
  // initialize the LED pin as an output
  pinMode(LED, OUTPUT);
 
}
 
void loop()
{
  // When a character arrives on the serial port this will be true
  if (Serial.available()) {
    // wait a bit for the entire message to arrive
    delay(100);
 
    //store the first character in var inbyte
    inbyte = Serial.read();
    if( inbyte == '1' ) function1(); //if the byte is an ASCII 0 execute function 1
    if( inbyte == '2' ) function2(); //if the byte is an ASCII 9 execute function 2
 
    
  }
}
 
void function1()
{
  //Enter what you want the command to initiate (e.g LED, Servo etc)
  digitalWrite(LED, HIGH);
}
 
void function2()
{
  //Enter what you want the command to initiate (e.g LED, Servo etc)
  digitalWrite(LED, LOW);

}
