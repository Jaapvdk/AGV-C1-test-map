
  const int motorPin1  = 5;
  const int motorPin2  = 6;
  int LDR_read = A1;
  int motor_control;
  const int knop_pin = 2;
  const int LDR = A0;

  int knop_state = HIGH;

  int knop_reading;
  int knop_previous_state = LOW;
  
void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motor_control, OUTPUT);
  pinMode(knop_pin, INPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);

   digitalWrite(motorPin1, LOW);
   digitalWrite(motorPin2, LOW);
}

void loop() {
  LDR_read = analogRead(LDR);
  motor_control = map(LDR_read, 200, 800, 0, 255);
  Serial.print(motor_control);
  Serial.print(",");
  Serial.println(knop_state);

  knop_reading = digitalRead(knop_pin);
  if (knop_reading == HIGH && knop_previous_state == LOW) {
    if (knop_state == HIGH){
      knop_state = LOW;}
    else{
      knop_state = HIGH;}

  }
    knop_previous_state = knop_reading;


    if (knop_state == HIGH){
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, LOW);
    }
    if (knop_state == LOW){
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, HIGH);
    }

    
}
