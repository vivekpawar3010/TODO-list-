    import Adafruit_DHT
    sensor = Adafruit_DHT.DHT11 # sensor should be this
    pin = 4 # here we connecting it to the GPIO 23 ot the BCM 4
    
    while true:
        humidity, temprature  = Adafruit_DHT.read_retry(sensor, pin)
        if humidity is not None and temprature is not None:
            print("Temp = {0:0.if}*C Humidity = {1:0.1f}%".format(temprature, humidity))
            if humidity > 45:
                GPIO.output(LED_PIN, GPIO.HIGH)
                print("TURN ON THE FAN")
            else:
                GPIO.output(LED_PIN, GPIO.LOW)
                print("TURN OFF THE FAN")
        else:
            print("Failed to get  the data. Try again.")
