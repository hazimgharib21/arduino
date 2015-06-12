int ledPin = 11;
float sinVal;
int ledVal;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){

  for (int x = 0; x < 180; x++){
    sinVal = (sin(x * (3.1414/180)));
    ledVal = int(sinVal * 255);
    analogWrite(ledPin, ledVal);
    delay(25);
  }
}
