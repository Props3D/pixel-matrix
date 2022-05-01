## pixel-matrix V0.1 - Prerelease

Arduino repository for 16x16 Pixel Matrix from Props3D. 

Licensed under the Creative Commons - Attribution - Non-Commercial - Share Alike license. https://creativecommons.org/licenses/by-nc-sa/4.0/

***DO NOT SELL OR DISTRIBUTE MODELS OR CODE WITHOUT PERMISSION***

Note that prerelease models have been tested and work, but do not come with instructions or guarantee that everything fits together properly. If you want have feedback please post on our discord(https://discord.gg/NSfZcCfJU6) on the #project-starwars-se14r channel

## Props 3D
* Join the Props3D Discord: https://discord.gg/NSfZcCfJU6
* Follow progress on instagram: https://www.instagram.com/props3dpro/ or https://www.instagram.com/craiggulliver/
* Subscribe on Youtube: https://www.youtube.com/c/Props3D
* Download released designs: https://www.thingiverse.com/props3dpro/designs


## Tutorial Video

* TBD

## Required Libraries
There's are number of libraries that you will need to install using the Arduino Library Manager:
 1. FastLED

## Setup and Configuration
The code can be used by updating the values in config.h based on your components,
wiring. All of the character arrays are also configured in this file. Add your
favorite characters to make it your own.

```c++   
/**
 * This file is used to define the size of the pixel matrix, and the 
 * available character arrays.
 */
#define NUM_LEDS 256
#define DATA_PIN 3  // Solder this to the DATA IN pin of the LED Matrix
```
