

// constants won't change. They're used here to set pin numbers:
const int rfbuttonPin1 = 2;  // the number of the pushbutton pin
const int rfbuttonPin2 = 3;
const int ledPin = 5;    // the number of the LED pin
const int buzzerpin = 4;
// variables will change:
 int buttonState1 = 0;  // variable for reading the pushbutton status
int buttonState2 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerpin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(rfbuttonPin1, INPUT);
  pinMode(rfbuttonPin2, INPUT);
}

void loop() 
{
  // read the state of the pushbutton value:
  
  buttonState1 = digitalRead(rfbuttonPin1);

  buttonState2 = digitalRead(rfbuttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) 
  {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } 
  else 
  {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }

  if (buttonState2 == HIGH)
   {
    // turn buzzer on:
    digitalWrite(buzzerpin, HIGH);
  } else 
  {
    // turn buzzer off:
    digitalWrite(buzzerpin, LOW);
  }
}
