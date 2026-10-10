#include "SevSeg.h"
SevSeg sevseg;
void setup() {
  // put your setup code here, to run once:
  byte numDigits = 1;
  byte digitPins = {};
  byte segmentPins[] = {6,5,2,3,4,7,8,9};
  bool resistorsOnSegments = true;

  byte hardwareConfig = COMMON_CATHODE;
  sevseg.begin(hardwareConfig,numDigits,digitPins,segmentPins,resistorsOnSegments);
  sevseg.setBrightness(90);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0;i<10;i++){
   sevseg.setNumber(i,i%2);
   delay(1000);
   sevseg.refreshDisplay();
  } 
}
