uint8_t dados[300];

void setup () {
  Serial.begin(9600);
}

void loop(){
  for (int i = 0; i < 300; i++) {
    dados[i] = analogRead(0) >> 2;
  }
  
  Serial.write(dados, 300);
  
  delay(0.1);
}

