int trafficDelay = 5000;
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup(){
     pinMode(redPin, OUTPUT);
     pinMode(yellowPin, OUTPUT);
     pinMode(greenPin, OUTPUT);
}

void loop(){
     digitalWrite(redPin, HIGH);
     delay(trafficDelay);
     digitalWrite(yellowPin, HIGH);
     delay(2000);

     digitalWrite(greenPin, HIGH);
     digitalWrite(redPin, LOW);
     digitalWrite(yellowPin, LOW);
     delay(trafficDelay);

     digitalWrite(yellowPin, HIGH);
     digitalWrite(greenPin, LOW);
     delay(2000);

     digitalWrite(yellowPin, LOW);
}
