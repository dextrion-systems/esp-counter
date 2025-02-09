#include <Arduino.h>


// PlatformIO-based ESP32 LCD code using LiquidCrystal_I2C
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the I2C address for the LCD (0x27 is common, but it may vary)
#define LCD_ADDRESS 0x27

// Initialize the LCD (16x2 format)
LiquidCrystal_I2C lcd(LCD_ADDRESS, 16, 2);

void setup() {
  // Initialize the LCD and backlight
  lcd.init();
  lcd.backlight();

  // Display a welcome message
  lcd.setCursor(0, 0); // Set the cursor to the first row, first column
  lcd.print("Hello, ESP32!");
  lcd.setCursor(0, 1); // Set the cursor to the second row, first column
  lcd.print("LCD Ready!");

  delay(3000); // Hold the message for 3 seconds
  lcd.clear(); // Clear the display
}

void loop() {
  // Example: Display a counter on the LCD
  for (int i = 0; i <= 100; i++) {
    lcd.setCursor(0, 0);
    lcd.print("Counter:");
    lcd.setCursor(0, 1);
    lcd.print(i);

    delay(time delay); 
  }
}