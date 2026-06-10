#include <LiquidCrystal.h>
#include <DHT.h>

LiquidCrystal lcd(11, 12, 2, 3, 4, 5);

#define DHTPIN 7
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(DHTPIN, INPUT_PULLUP);
  lcd.begin(16, 2);
  dht.begin();
  delay(3000);
  lcd.print("Weather Station");
  delay(2000);
  lcd.clear();
}

void loop() {
  float humidity = dht.readHumidity();
  float tempC = dht.readTemperature();

  if (isnan(humidity) || isnan(tempC)) {
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error!   ");
    delay(2500);
    return;
  }

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC, 1);
  lcd.print((char)223);
  lcd.print("C  ");

  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(humidity, 1);
  lcd.print("%  ");

  delay(2500);
}
