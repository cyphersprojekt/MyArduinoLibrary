int dO = 2;
int value;

void setup() {
  pinMode(dO, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = digitalRead(dO);
  if (value == HIGH){
    Serial.println("El pelotudo está hablando o haciendo ruido");
    delay(250);
  }
  else {
    Serial.println("El pelotudo está callado");
    delay(250);
  }
}
