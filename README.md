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

## Electonic Components

Electronic | Components
------------ | -------------
![Arduino Nano v3](https://user-images.githubusercontent.com/20442880/137374161-c34e9e7f-19bf-4b33-ba91-6ae4edc709ff.jpg) | ![DF Player Mini with Micro SD Card](https://user-images.githubusercontent.com/20442880/137374190-bcfa4d14-6f8d-4973-b493-c87bd1d0676d.jpg)
Arduino Nano v3 | DF Player Mini + 64mb Micro SD Card
![Mini 360 DC-DC Buck Converter](https://user-images.githubusercontent.com/20442880/137374870-9687ea11-6a7c-48f6-8c0b-2ff4e34c62d3.jpg) | ![Lipo 7 4v](https://user-images.githubusercontent.com/20442880/137374882-cb61cde1-8c05-4817-9e06-7526e851bfad.jpg)
Mini 360 DC-DC Buck Converter | Lipo 7.4v
![1K Resister](https://user-images.githubusercontent.com/20442880/137374919-023f0bea-65f6-46a1-9d45-69f5a79e6916.jpg) | ![DRV2605L with 8mm ERM](https://user-images.githubusercontent.com/20442880/137374950-a2673b35-5a02-46b6-b322-de556f20e97e.jpg)
2 X 1K Resister | DRV2605L with 8mm ERM (Optional)

## Parts

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

## Example Wiring Diagram:
![SampleWiring](https://user-images.githubusercontent.com/20442880/137413974-aae3f170-1d8a-4850-9287-8ae751f7e130.png)

## Test Board Reference Design
![SE14r](https://user-images.githubusercontent.com/20442880/137375634-33618817-6704-49bb-8df2-a8f4f221b191.JPG)

