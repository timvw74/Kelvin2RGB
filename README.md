# Kelvin2RGB
Kelvin2RGB is an Arduino library that will convert a colour temperature to RGB.  It accepts a Temperature and a brightness and calculates the values for RGB corrected for the brightness.

### Usage
Include the Library and then create an object using the Temperature and Brightness you want to calculate for.  You can then extract the values for Red Green and Blue.

```cpp
Kelvin2RGB kelvin(4100, 75);  //Warm light at 75% brightness
byte red = kelvin.Red;        //191
byte green = kelvin.Green;    //156
byte blue = kelvin.Blue;      //127
```

```cpp
Kelvin2RGB kelvin(9500, 50);  //Cool light at 50% brightness
byte red = kelvin.Red;        //102
byte green = kelvin.Green;    //110
byte blue = kelvin.Blue;      //127
```