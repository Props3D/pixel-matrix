
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

  // PacGhost
  for (int passtime = 0; passtime < 8; passtime++) {
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(PacGhost01[i]));
    }
    FastLED.show();
    delay(350);
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(PacGhost02[i]));
    }
    FastLED.show();
    delay(350);
  }

  // MarioRun
  for (int passtime = 0; passtime < 8; passtime++) {
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(MarioRun01[i]));
    }
    FastLED.show();
    delay(350);
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(MarioRun02[i]));
    }
    FastLED.show();
    delay(350);
  }

  // Goomba
  for (int passtime = 0; passtime < 8; passtime++) {
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(Goomba01[i]));
    }
    FastLED.show();
    delay(350);
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(Goomba02[i]));
    }
    FastLED.show();
    delay(350);
  }


  // Put Qbert first frame
  for (int passtime = 0; passtime < 8; passtime++) { // Display it 8 times
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(Qbert01[i]));  // Read array from Flash
    }
    FastLED.show();
    delay(500);
    // Put Qbert second frame
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(Qbert02[i]));
    }
    FastLED.show();
    delay(500);
  }

  // Frogger
  for (int passtime = 0; passtime < 8; passtime++) {
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(Frogger01[i]));
    }
    FastLED.show();
    delay(250);
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(Frogger02[i]));
    }
    FastLED.show();
    delay(250);
  }

  // Put Galaga first frame
  for (int passtime = 0; passtime < 8; passtime++) {
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(Galaga01[i]));
    }
    FastLED.show();
    delay(250);
    // Put DigDug second frame
    FastLED.clear();
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = pgm_read_dword(&(Galaga02[i]));
    }
    FastLED.show();
    delay(250);
  }

}
