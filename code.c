#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd_1(0);

// Pin Definitions
const int redLED = 4;
const int yellowLED = 9;
const int greenLED = 10;
const int button = 6;

int count = 0;

void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.setBacklight(1);

  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(button, INPUT_PULLUP);

  // Initial Traffic Light
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);

  // LCD Display
  lcd_1.setCursor(0, 0);
  lcd_1.print("Pedestrians:");

  lcd_1.setCursor(0, 1);
  lcd_1.print(count);
}

void loop()
{
  if (digitalRead(button) == LOW)
  {
    delay(50);   // Debounce

    if (digitalRead(button) == LOW)
    {
      count++;

      // Update LCD
      lcd_1.setCursor(0, 1);
      lcd_1.print("                "); // Clear line
      lcd_1.setCursor(0, 1);
      lcd_1.print(count);

      // Green -> Yellow
      digitalWrite(greenLED, LOW);
      digitalWrite(yellowLED, HIGH);
      delay(2000);

      // Yellow -> Red
      digitalWrite(yellowLED, LOW);
      digitalWrite(redLED, HIGH);
      delay(6000);

      // Red -> Yellow
      digitalWrite(redLED, LOW);
      digitalWrite(yellowLED, HIGH);
      delay(2000);

      // Yellow -> Green
      digitalWrite(yellowLED, LOW);
      digitalWrite(greenLED, HIGH);

      // Wait until button is released
      while (digitalRead(button) == LOW);
      delay(100);
    }
  }
}
