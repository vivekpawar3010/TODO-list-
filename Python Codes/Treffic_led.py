// Trafic light 

import RPi.GPIO as GPIO
import time

# Pin configuration
RED_LED = 18
YELLOW_LED = 23
GREEN_LED = 24

# GPIO setup
GPIO.setmode(GPIO.BCM)
GPIO.setup(RED_LED, GPIO.OUT)
GPIO.setup(YELLOW_LED, GPIO.OUT)
GPIO.setup(GREEN_LED, GPIO.OUT)

def traffic_light_cycle():
    while True:
        # Red light
        GPIO.output(RED_LED, GPIO.HIGH)
        time.sleep(3)
        GPIO.output(RED_LED, GPIO.LOW)
        
        # Yellow light
        GPIO.output(YELLOW_LED, GPIO.HIGH)
        time.sleep(1)
        GPIO.output(YELLOW_LED, GPIO.LOW)
        
        # Green light
        GPIO.output(GREEN_LED, GPIO.HIGH)
        time.sleep(3)
        GPIO.output(GREEN_LED, GPIO.LOW)
        
        # Yellow before red
        GPIO.output(YELLOW_LED, GPIO.HIGH)
        time.sleep(1)
        GPIO.output(YELLOW_LED, GPIO.LOW)

try:
    traffic_light_cycle()
except KeyboardInterrupt:
    GPIO.cleanup()
