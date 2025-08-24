import RPi.GPIO as GPIO
import time
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
#GPIO.setmode(GPIO.BCM) '4' for output
GPIO.setup(7.GPIO.OUT) #define pin 7 output pin 
while True:
    GPIO.output(7,1) # output digital HIGH signal 5v on pin 
    time.sleep(1) $ time delay of 2 second
    GPIO.output(7,0) # output digital HIGH signal 5v on pin 
    time.sleep(1) # time delay of 1 second
