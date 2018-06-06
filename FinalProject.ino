/*
Prototype made with Arduino LillyPad.  
*/

int sensorValue = 0;// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(A6,INPUT);

  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() 
{
     sensorValue = analogRead(A6);
     Serial.print("sensor=");
     Serial.println(sensorValue);
     
    if(sensorValue > 15)
    {
      digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      digitalWrite(A2, HIGH);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      digitalWrite(A4, HIGH);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      digitalWrite(A3, HIGH);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      delay(2000); 
      digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      delay(2000); 
      digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      delay(2000); 
      digitalWrite(A2, LOW);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      delay(2000);
      digitalWrite(A4, LOW);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      delay(2000); 
      digitalWrite(A3, LOW);   // turn the LED on (HIGH is the voltage level)
      sensorValue = analogRead(A6);
      delay(2000); 
      sensorValue = analogRead(A6);
        while(sensorValue>15)
        {
            sensorValue = analogRead(A6);
            digitalWrite(5, HIGH); 
            sensorValue = analogRead(A6);
            delay(50); // turn the LED on (HIGH is the voltage level)
            sensorValue = analogRead(A6);
            digitalWrite(3, HIGH);
            sensorValue = analogRead(A6);
            tone(7, 329, 500);
            sensorValue = analogRead(A6);
            delay( 500 );
            sensorValue = analogRead(A6);
            tone(7, 440, 750);
            sensorValue = analogRead(A6);
            digitalWrite(5, LOW);
            sensorValue = analogRead(A6); 
            digitalWrite(6, HIGH); 
            sensorValue = analogRead(A6);// turn the LED on (HIGH is the voltage level)
            digitalWrite(3, HIGH);
            sensorValue = analogRead(A6);
            tone(7, 329, 500);
            sensorValue = analogRead(A6);
            delay( 500 );
            sensorValue = analogRead(A6);
            tone(7, 440, 750);
            sensorValue = analogRead(A6);
            delay(50);
            sensorValue = analogRead(A6);
            digitalWrite(6, LOW); 
            sensorValue = analogRead(A6);
            digitalWrite(A2, HIGH);   // turn the LED on (HIGH is the voltage level)
            sensorValue = analogRead(A6);
            digitalWrite(3, HIGH);
            sensorValue = analogRead(A6);
            tone(7, 329, 500);
            sensorValue = analogRead(A6);
            delay( 500 );
            sensorValue = analogRead(A6);
            tone(7, 440, 750);
            sensorValue = analogRead(A6);
            delay(50);
            sensorValue = analogRead(A6);
            digitalWrite(A2, LOW); 
            sensorValue = analogRead(A6); 
            digitalWrite(A4, HIGH);   // turn the LED on (HIGH is the voltage level)
            sensorValue = analogRead(A6);
            digitalWrite(3, HIGH);
            sensorValue = analogRead(A6);
            tone(7, 329, 500);
            sensorValue = analogRead(A6);
            delay( 500 );
            sensorValue = analogRead(A6);
            tone(7, 440, 750);
            sensorValue = analogRead(A6);
            delay(50);
            sensorValue = analogRead(A6);
            digitalWrite(A4, LOW); 
            sensorValue = analogRead(A6); 
            digitalWrite(A3, HIGH);
            sensorValue = analogRead(A6);// turn the LED on (HIGH is the voltage level)
            digitalWrite(3, HIGH);
            sensorValue = analogRead(A6);
            tone(7, 329, 500);
            sensorValue = analogRead(A6);
            delay( 500 );
            sensorValue = analogRead(A6);
            tone(7, 440, 750);
            sensorValue = analogRead(A6);
            delay(50);
            sensorValue = analogRead(A6);
            digitalWrite(A3, LOW);
            sensorValue = analogRead(A6);
            digitalWrite(3, HIGH);
            sensorValue = analogRead(A6);
            tone(7, 329, 500);
            sensorValue = analogRead(A6);
            delay( 500 );
            sensorValue = analogRead(A6);
            tone(7, 440, 750);
            sensorValue = analogRead(A6);
         }
    }
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
}
  
