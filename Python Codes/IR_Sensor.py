# Import required libraries
import RPi.GPIO as GPIO  # Library to control Raspberry Pi GPIO pins
import time  # Library to use time-related functions
# API key = "PAWJ8KSZ4GPWMHKU"
# Define GPIO pin numbers
LED_PIN = 18  # GPIO pin connected to LED
IR_SENSOR = 17  # GPIO pin connected to IR sensor

# Set the pin numbering mode
GPIO.setmode(GPIO.BCM)  # Use Broadcom (BCM) pin numbering

# Configure GPIO pins
GPIO.setup(LED_PIN, GPIO.OUT)  # Set LED pin as an output
GPIO.setup(IR_SENSOR, GPIO.IN)  # Set IR sensor pin as an input

# Function to detect an object using the IR sensor
def detect_object():
    while True:
        # Check if the IR sensor detects an object
        if GPIO.input(IR_SENSOR) == 0:  # Sensor gives LOW (0) when an object is detected
            GPIO.output(LED_PIN, GPIO.HIGH)  # Turn ON the LED
            print("Object detected! LED ON")  # Print status to console
        else:
            GPIO.output(LED_PIN, GPIO.LOW)  # Turn OFF the LED
            print("No object detected. LED OFF")  # Print status to console
        
        time.sleep(0.1)  # Small delay to avoid excessive CPU usage

# Run the object detection function with exception handling
try:
    detect_object()  # Call the function to start detecting objects
except KeyboardInterrupt:
    print("\nProgram stopped by user. Cleaning up GPIO...")  # Notify user
    GPIO.cleanup()  # Reset GPIO pins to their default state
    print("GPIO cleanup done. Exiting program.")  # Confirm cleanup completion
