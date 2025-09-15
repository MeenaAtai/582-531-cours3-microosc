#include <Arduino.h>
#define MA_BROCHE_BOUTON 39

#include <MicroOscSlip.h>

MicroOscSlip<128> monOsc(& Serial);

void setup() {
  Serial.begin(115200);
  pinMode( MA_BROCHE_BOUTON , INPUT );
}

void loop() {
  int maLectureBouton = digitalRead( MA_BROCHE_BOUTON );
  //Serial.println(maLectureBouton);
  monOsc.sendInt("/bouton", maLectureBouton);

  
  delay(100);
}