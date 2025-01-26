#ifndef myoptions_h
#define myoptions_h

/* Generated by myoptions.h generator - v0.8.1 */
/* https://e2002.github.io/docs/myoptions-generator.html?r=71,2,7,19,42,45,46,66&i=1,2,3,4,40&v=2,15,-1,21,17 */
/* Put this file next to yoRadio.ino and restart Arduino IDE. */

/* !!! Attention !!! */
/* This configuration depends on some additional libraries. Please install them using the library manager: */
/* Adafruit GFX Library, Adafruit ILI9341 */

/* !!! Do not be alarmed, all right, the default values ​​are not included in this file !!! */

#define DSP_MODEL           DSP_ST7789
#define DSP_HSPI            true             /*  Use HSPI for display  */ 
#define TFT_DC              2
#define TFT_CS              15
#define BRIGHTNESS_PIN      27
#define TFT_ROTATE          3

#define I2S_INTERNAL        true
#define PLAYER_FORCE_MONO		true

#define LED_BUILTIN         4
#define LED_INVERT          true

/* Only these 3 pins available on 1.25mm connector */
// #define ENC_BTNR      22
// #define ENC_BTNL      21
// #define ENC_BTNB      35

/* Check this for your own device */
// #define ENC_INTERNALPULLUP      true

#define TS_MODEL              TS_MODEL_XPT2046
#define TS_CS                 33            /*  Touch screen CS pin  */ 
#define TS_HSPI               true         /*  Use HSPI for Touch screen  */ 
#endif
