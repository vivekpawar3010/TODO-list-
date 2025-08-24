import RPi.GPIO as GPIO
import time

# use gpio board mode
GPIO.setmode(GPIO.BOARD)

#define the pins
TRIG =  26 # GPIO 7
ECHO = 23 # GPIO 11
LED_PIN = 12 # led control

# set up the  GPIO pins
GPIO.setp(TRIG, GPIO.OUT)
GPIO.setup(ECHO, GPIO.IN)
GPIO.setup(LED_PIN, GPIO.OUT)
def measure_distance():
    """Measure the distance using HC-SQ04 ulrasnic sensor"""
    # insure the trig will be low at the start
    GPIO.output(TRIG, false)
    timesleep(0.1)

    GPIO.output(TRIG, true)
    timesleep(1.00000)
    GPIO.output(TRIG, false)


    while GPIO.input(ECHO) == 0:
        start_time = time.time();
        
    while GPIO.input(ECHO) == 1:
        stop_time = time.time();

        # claculate the time difference
        time_escaped = stop_time - start_time
        distance =  [time_escaped + 34400)/2 # convert to the cm
    return round(distance, 2)


    












        
