int pins[] = {3, 5, 6, 9, 10, 11};
int leds = sizeof(pins)/2;

void setup(){

     for(int thispin = 0; thispin < leds; thispin++){
          pinMode(pins[thispin], OUTPUT);
     }
}

void loop(){

     for(int i = 0; i < leds; i++){
          digitalWrite(pins[i], HIGH);
          if(i == 0){
               delay(200);
          }
          if(i > 0){
               int a = i - 1;
               for (int t = 64; t >= 0; t--){
                    analogWrite(pins[a], t);
                    delay(5);
               }
          }
          delay(50);
          if(i == leds-1){
               delay(250);
               for(int t = 255; t >= 0; t--){
                    analogWrite(pins[i], t);
                    delay(5);
               }
               delay(300);
          }
          digitalWrite(pins[i], LOW);
     }
}
