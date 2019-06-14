//test Jonathan
int LED = 13; // Use the onboard Uno LED
int boomPin = 7;  // This is our input pin
int boomDetect = HIGH;  // HIGH MEANS NO OBSTACLE
int boomteller = 0;
int tickdo = LOW;
int timer = 0;
/*
 * kijken of git dit automaties goed doet
 * 
 */

 
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(boomPin, INPUT);
  Serial.begin(9600);  
}
void loop() {
  boomDetect = digitalRead(boomPin); 
  if ((boomDetect == LOW) && (tickdo == LOW)) 
  {
    boomteller++;
    Serial.println(boomteller);
    digitalWrite(LED, HIGH);
    tickdo = HIGH;
    
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  timer++; 
  if (timer == 25){
      tickdo = LOW;
      timer = 0;
      }
      delay(200);
}

/*
 * verandering
 * /
*/
