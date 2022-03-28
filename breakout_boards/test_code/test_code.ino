#define R 12
#define B 13
#define G 14
#define ARGB1 5
#define ARGB2 4

void setup() {
  // put your setup code here, to run once:
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(R,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(B,HIGH);
  delay(1000);
  analogWrite(B,100);
  delay(500);
  digitalWrite(B,LOW);
  delay(500);
  analogWrite(G,100);
  delay(500);
  digitalWrite(G,LOW);
  delay(500);
  analogWrite(R,100);
  delay(500);
  digitalWrite(R,LOW);
  delay(1000);
}
