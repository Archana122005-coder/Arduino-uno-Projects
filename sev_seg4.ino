#include "SevSeg.h"
SevSeg sevseg;
void setup() {
  // put your setup code here, to run once:
  byte numDigits = 4;
  byte digitPins[] = {10,11,12,13};
  byte segmentPins[] = {2,3,4,5,6,7,8,9};

  bool resistorsOnSegments = true;
  bool UpdateWithDelayIn = true;
  
  byte hardwareConfig = COMMON_CATHODE;
  sevseg.begin(hardwareConfig,numDigits,digitPins,segmentPins,resistorsOnSegments);
  sevseg.setBrightness(90);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0;i<500;i++){
  sevseg.setNumber(i);
  for(int j = 0;j<30;j++){
     sevseg.refreshDisplay();
     delay(1);
  }
  }
}
