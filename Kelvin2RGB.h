/*
  Kelvin2RGB.h - Library for converting kelvin to RGB.
  Created by Tim van Wijk.
  Released into the public domain.
*/
#ifndef Kelvin2RGB_h
#define Kelvin2RGB_h

#include "Arduino.h"

class Kelvin2RGB
{
  public:
    Kelvin2RGB(unsigned int temperature, int brightness);
    unsigned int Temperature;
    int Brightness;
    byte Red;
    byte Green;
    byte Blue;
    unsigned long Color;
  private:
    unsigned int _temperature;
    int _brightness;
    byte calculateRed();
    byte calculateGreen();
    byte calculateBlue();
};

#endif
