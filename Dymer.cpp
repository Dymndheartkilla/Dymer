#include "Arduino.h"
#include "Dymer.h"

Dymer::Dymer(unsigned long ms) {
  waitTime = ms;
}


Dymer::~Dymer(void) {  }  // Nothing allocated so nothing to do.


void Dymer::setTime(unsigned long ms) {
  waitTime = ms;
}


void Dymer::start(void) {

  startTime = millis();
}


unsigned long Dymer::currentMs(void) { 

  return millis();
}


bool Dymer::beepBoop(void) {
  return (millis() - startTime > waitTime);
}