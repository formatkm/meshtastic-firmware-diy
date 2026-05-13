

// #ifndef _VARIANT_ESP32S3_DEVKIT_
// #define _VARIANT_ESP32S3_DEVKIT_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
// Battery
#define BATTERY_PIN 20
#define ADC_MULTIPLIER 1.4
#define BAT_MEASURE_ADC_UNIT 2
#define ADC_CHANNEL ADC2_GPIO20_CHANNEL
#define ADC_ATTENUATION ADC_ATTEN_DB_12 // Voltage divider output is quite high
#define ADC_CTRL 19
#define ADC_CTRL_ENABLED HIGH
#define LED_POWER 3

#define USE_SSD1306
// different screen
#define USE_SH1106
// Button on NanoVHF PCB
#define BUTTON_PIN 1

// I2C via connectors on NanoVHF PCB
#define I2C_SCL SCL
#define I2C_SDA SDA

// Screen (disabled)
//#define HAS_SCREEN 0 // Assume no screen present by default to prevent crash...

// GPS via T-Energy-S3 onboard connector
#define HAS_GPS 0
// #define GPS_TX_PIN 43
// #define GPS_RX_PIN 44

// audio codec ES8311
#define HAS_I2S
#define DAC_I2S_BCK 41
#define DAC_I2S_WS 43
#define DAC_I2S_DOUT 42
#define DAC_I2S_DIN 46
#define DAC_I2S_MCLK 45 // dummy

// LoRa
#define USE_SX1262 // E22-900M30S, E22-900M22S, and E22-900MM22S (not E220!) use SX1262
#define USE_SX1268 // E22-400M30S, E22-400M33S, E22-400M22S, and E22-400MM22S use SX1268

#define SX126X_MAX_POWER 22          // SX126xInterface.cpp defaults to 22 if not defined, but here we define it for good practice
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 // E22 series TCXO reference voltage is 1.8V
#define TCXO_OPTIONAL // make it so that the firmware can try both TCXO and XTAL

#define SX126X_CS SS    // EBYTE module's NSS pin // FIXME: rename to SX126X_SS
#define SX126X_SCK SCK   // EBYTE module's SCK pin
#define SX126X_MOSI MOSI // EBYTE module's MOSI pin
#define SX126X_MISO MISO  // EBYTE module's MISO pin
#define SX126X_RESET 12 // EBYTE module's NRST pin
#define SX126X_BUSY 13 // EBYTE module's BUSY pin
#define SX126X_DIO1 14 // EBYTE module's DIO1 pin

//#define SX126X_TXEN 11 // Schematic connects EBYTE module's TXEN pin to MCU
//#define SX126X_RXEN 12 // Schematic connects EBYTE module's RXEN pin to MCU

#define LORA_CS SX126X_CS     // Compatibility with variant file configuration structure
#define LORA_SCK SX126X_SCK   // Compatibility with variant file configuration structure
#define LORA_MOSI SX126X_MOSI // Compatibility with variant file configuration structure
#define LORA_MISO SX126X_MISO // Compatibility with variant file configuration structure
#define LORA_DIO1 SX126X_DIO1 // Compatibility with variant file configuration structure

// 
// #define HAS_NEOPIXEL                         // Enable the use of neopixels
// #define NEOPIXEL_COUNT 1                     // How many neopixels are connected
// #define NEOPIXEL_DATA 48                     // gpio pin used to send data to the neopixels
// #define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800) // type of neopixels in use
#ifdef __cplusplus
}
#endif

// /*----------------------------------------------------------------------------
//  *        Arduino objects - C++ only
//  *----------------------------------------------------------------------------*/

// #endif