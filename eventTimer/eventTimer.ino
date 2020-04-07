#include "eventTimer.h"


eventTimer myTimer; //construct timer
uint8_t inc; //counter for example


void setup() {
  Serial.begin(115200);
  myTimer.start(1000); //start the timer for 1 sec
}

void loop() {
  if (myTimer.checkExpired()) { //run for example
    inc++;
    Serial.println(inc);
    myTimer.start(1000);
  }

}
