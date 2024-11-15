// DisplayInit.h

#ifndef DISPLAY_INIT_H
#define DISPLAY_INIT_H

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <U8g2lib.h>
#include <Fonts/FreeSerifBold9pt7b.h>

// Pin definitions
#define TFT_CS 21
#define TFT_RST 1
#define TFT_DC 20
#define TFT_MOSI 5
#define TFT_SCLK 8

// Button and potentiometer configuration
extern const int buttonPin;
extern const int potPin;
extern int buttonState;
extern int lastButtonState;
extern unsigned long lastPressTime;
extern const unsigned long debounceDelay;
extern int value;
extern int mappedValue;
extern int lastMappedValue;
extern const int minPotValue;
extern const int maxPotValue;
extern int inc;
extern bool buttonpressed;
extern int currentpage;

// Array of function pointers for page handling
extern void (*pages[])(); // Declare as extern, define in DisplayInit.cpp

// Display objects
extern U8G2_SSD1306_72X40_ER_F_SW_I2C u8g2;
extern Adafruit_ST7735 tft;

// Function declarations
void setupDisplay();
void Startup();
void knob();
void button();
void drawmenu();
void calcengine();
void cleanscreen();

#endif // DISPLAY_INIT_H
