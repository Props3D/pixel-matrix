#ifndef pixelmagic_h
#define pixelmagic_h

/**
 * This file is used to define the size of the pixel matrix, and the 
 * available character arrays.
 */
#define NUM_LEDS 256
#define DATA_PIN 2  // Solder this to the DATA IN pin of the LED Matrix

/**
 *  Character Arrays, Generate with 'LCD Image Converter' using 24bit color, 
 *  odd lines are forward, even lines are backward
 *  two frames per character for animation
 */
const long MyCharacterA01[] PROGMEM =
{
 
};
const long MyCharacterA02[] PROGMEM =
{
 
};

#endif
