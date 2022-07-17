int trigger = 2;
int echo = 3;
int duration;
int distance;
String message;
String concatenation;

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  
  digitalWrite(trigger, HIGH);
  delay(1);
  digitalWrite(trigger, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration / 58.2;

  message = "El objeto más cercano está a ";
  concatenation = message + distance + "cms";
  Serial.println(concatenation);
  delay(100);
}
