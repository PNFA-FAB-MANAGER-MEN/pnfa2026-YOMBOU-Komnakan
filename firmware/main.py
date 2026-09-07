from machine import Pin, I2C
from ssd1306 import SSD1306_I2C
import dht, time
 
capteur = dht.DHT11(Pin(4))                      # DHT22 sur D3 (GPIO4)
i2c = I2C(0, scl=Pin(6), sda=Pin(5), freq=400000) # I2C sur D4/D5
oled = SSD1306_I2C(128, 64, i2c)
 
while True:
    try:
        capteur.measure()
        t, h = capteur.temperature(), capteur.humidity()
        oled.fill(0)
        oled.text('Station meteo', 0, 0)
        oled.text('Temp: {:.1f} C'.format(t), 0, 24)
        oled.text('Hum : {:.1f} %'.format(h), 0, 40)
        oled.show()
    except OSError as e:
        print('Erreur capteur:', e)
    time.sleep(2)
