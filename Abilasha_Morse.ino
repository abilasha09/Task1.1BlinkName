int LED = 9;
int longtime = 900;
int shorttime = 300;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  

}

// the loop function runs over and over again forever
void loop() {
  //A
 switchLED(shorttime);
 switchLED(longtime);
 //B
 delay(longtime);
 switchLED(longtime);
 switchLED(shorttime);
 switchLED(shorttime);
 switchLED(shorttime);
 //I
 delay(longtime);
 switchLED(shorttime);
 switchLED(shorttime);
//L
delay(longtime);
switchLED(shorttime);
switchLED(longtime);
switchLED(shorttime);
switchLED(shorttime);
 //A
 delay(longtime);
 switchLED(shorttime);
 switchLED(longtime);
//S
delay(longtime);
switchLED(shorttime);
switchLED(shorttime);
switchLED(shorttime);
//H
delay(longtime);
switchLED(shorttime);
switchLED(shorttime);
switchLED(shorttime);
switchLED(shorttime);
//A
delay(longtime);
switchLED(shorttime);
switchLED(longtime);

}

void switchLED(int timing){
  digitalWrite(LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(timing);                      // wait for a second
  digitalWrite(LED, LOW);   // turn the LED off by making the voltage LOW
  delay(shorttime);  
}