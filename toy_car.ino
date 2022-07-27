
#define ledF 1 //7
#define ledR 2 //6
#define ledRR 4 //3
#define forward 3// 2

void setup(){
  pinMode(forward, INPUT_PULLUP);
  pinMode(ledF, OUTPUT);
  pinMode(ledRR, OUTPUT);
  pinMode(ledR, OUTPUT);
  digitalWrite(ledF, 0);
  digitalWrite(ledR, 0);
  digitalWrite(ledRR, 0);

}

void loop(){
  if (digitalRead(forward) == 0){
    for (uint8_t i=0; i<4; i++){
      digitalWrite(ledF, 1);
      digitalWrite(ledR, 1);
      digitalWrite(ledRR, 1);
      delay(300);
      digitalWrite(ledF, 0);
      digitalWrite(ledR, 0);
      digitalWrite(ledRR, 0);
    }
    
    for (uint8_t i=0; i<3; i++){
      delay(700);
      digitalWrite(ledF, 1);
      digitalWrite(ledR, 1);
      digitalWrite(ledRR, 0);
      delay(700);
      digitalWrite(ledF, 1);
      digitalWrite(ledR, 0);
      digitalWrite(ledRR, 1);
    }
    delay(700);
    digitalWrite(ledF, 0);
    digitalWrite(ledR, 0);
    digitalWrite(ledRR, 0);
    delay(300);
    digitalWrite(ledF, 1);
    digitalWrite(ledR, 1);
    digitalWrite(ledRR, 1);
    delay(3000);
    digitalWrite(ledF, 0);
    digitalWrite(ledR, 0);
    digitalWrite(ledRR, 0);

  } else{
      digitalWrite(ledR, 0);
      digitalWrite(ledRR, 0);
      digitalWrite(ledF, 0);
   }
}

