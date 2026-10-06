const int txPin = 1;
const unsigned int bitDelay = 104;
void setup() {
  // put your setup code here, to run once:
 pinMode(txPin,OUTPUT);
 digitalWrite(txPin,HIGH);
 delay(10);
}
void loop() {
  // put your main code here, to run repeatedly:
  sendByte('H');
  sendByte('i');
  delay(2000);
   }
void sendByte(char c){
  digitalWrite(txPin,LOW); // START BIT
  delayMicroseconds(bitDelay);
  for(int i = 0;i<8;i++){   // DATA BITS
    int bitVal = (c>>i) & 0x01;
  digitalWrite(txPin,bitVal);
  delayMicroseconds(bitDelay);
  }
  digitalWrite(txPin,HIGH); // STOP BIT
  delayMicroseconds(bitDelay);
}
