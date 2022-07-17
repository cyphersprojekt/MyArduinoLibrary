#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define modOUT 8

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(modOUT, INPUT);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  Serial.begin(9600);
}

void loop() {
  
  //red
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  int RED = pulseIn(modOUT, LOW);
  delay(200);

  //green
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  int GREEN = pulseIn(modOUT, LOW);
  delay(200);

  //blue
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  int BLUE = pulseIn(modOUT, LOW);
  delay(200);

  Serial.print("R: ");
  Serial.print(RED);
  Serial.print("\t");
  Serial.print("G: ");
  Serial.print(GREEN);
  Serial.print("\t");
  Serial.print("B: ");
  Serial.println(BLUE);

}
