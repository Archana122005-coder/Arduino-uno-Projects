int LedPin = 13;
int InputPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin,OUTPUT);
  pinMode(InputPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(InputPin);
  if(val == HIGH){
    digitalWrite(LedPin,HIGH);
  }
  else{
    digitalWrite(LedPin,LOW);
  }

}
