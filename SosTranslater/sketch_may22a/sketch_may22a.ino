int ledPin = 13;

char* letters[] = {
  ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
  ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
  "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
};

char* numbers[] = {"-----", ".----", "..---", "...--", "...-", ".....", "-....", "--...", "---..", "----." };

int dotDelay = 200;

void setup(){

  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){

  char ch;
  if(Serial.available()){
    ch = Serial.read();
    if(ch >= 'a' && ch <= 'z'){
      flashSequence(letters[ch - 'a']);
    }else if(ch >=
  }
}
