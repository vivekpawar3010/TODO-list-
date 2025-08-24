import RPi.GPIO as GPIO
import time

# Define GPIO pin for the IR sensor
IR_SENSOR_PIN = 17  

# Set up GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(IR_SENSOR_PIN, GPIO.IN)  # Set as input

try:
    while True:
        if GPIO.input(IR_SENSOR_PIN) == 0:
            print("Object Detected!")
        else:
            print("No Object")
        time.sleep(0.5)  # Delay for stability

except KeyboardInterrupt:
    print("Exiting Program")
    GPIO.cleanup()  # Clean up GPIO before exit
