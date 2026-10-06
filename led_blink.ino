int RedLed = 7;
int GreenLed = 8;
int YellowLed = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(RedLed,OUTPUT);
  pinMode(GreenLed,OUTPUT);
  pinMode(YellowLed,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RedLed,HIGH);
  delay(1000);
  digitalWrite(RedLed,LOW);
  delay(1000);
  digitalWrite(YellowLed,HIGH);
  delay(1000);
  digitalWrite(YellowLed,LOW);
  delay(1000);
  digitalWrite(GreenLed,HIGH);
  delay(1000);
  digitalWrite(GreenLed,LOW);
  delay(1000);
  

}
