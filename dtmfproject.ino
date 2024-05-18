# Import the required library
import RPi.GPIO as GPIO
import time

# Set GPIO pin numbers
rfbuttonPin1 = 2
rfbuttonPin2 = 3
ledPin = 5
buzzerpin = 4

# Set GPIO mode
GPIO.setmode(GPIO.BCM)

# Set GPIO pin directions
GPIO.setup(ledPin, GPIO.OUT)
GPIO.setup(buzzerpin, GPIO.OUT)
GPIO.setup(rfbuttonPin1, GPIO.IN)
GPIO.setup(rfbuttonPin2, GPIO.IN)

try:
    while True:
        # Read the state of the pushbuttons
        buttonState1 = GPIO.input(rfbuttonPin1)
        buttonState2 = GPIO.input(rfbuttonPin2)

        # Check if the first pushbutton is pressed
        if buttonState1 == GPIO.HIGH:
            # Turn on the LED
            GPIO.output(ledPin, GPIO.HIGH)
        else:
            # Turn off the LED
            GPIO.output(ledPin, GPIO.LOW)

        # Check if the second pushbutton is pressed
        if buttonState2 == GPIO.HIGH:
            # Turn on the buzzer
            GPIO.output(buzzerpin, GPIO.HIGH)
        else:
            # Turn off the buzzer
            GPIO.output(buzzerpin, GPIO.LOW)

        # Delay for a short period to avoid excessive CPU usage
        time.sleep(0.1)

except KeyboardInterrupt:
    # Clean up GPIO settings before exiting
    GPIO.cleanup()
