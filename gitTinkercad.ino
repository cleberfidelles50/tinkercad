#define led 1
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, true);
  delay(1000);
  digitalWrite(led, false);
  delay(1000);

}
