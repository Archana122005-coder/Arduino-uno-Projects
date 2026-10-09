int buzzerPin = 8;
int inputPin = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin,OUTPUT);
  pinMode(inputPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(inputPin);
  if(buttonState == LOW ){
    digitalWrite(buzzerPin,HIGH);
  }
  if(buttonState == HIGH) {
    digitalWrite(buzzerPin,LOW);;
  }

}
