
#include <avr/pgmspace.h>
#include "FastLED.h"
#include "config.h"

// Using FastLED to control the pixel matrix
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS); // Init of the Fastled library
  FastLED.setBrightness(15);
}

void loop() {

  // MyCharacterA
  for (int passtime = 0; passtime < 8; passtime++) {
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(MyCharacterA01[i]));
    }
    FastLED.show();
    delay(350);
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(MyCharacterA02[i]));
    }
    FastLED.show();
    delay(350);
  }



}
