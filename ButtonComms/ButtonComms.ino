
// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int redPin =  6;      // the number of the red pin
const int greenPin =  5;      // the number of the green pin
const int bluePin =  3;      // the number of the blue pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(redPin, OUTPUT);      
  pinMode(greenPin, OUTPUT);   
  pinMode(bluePin, OUTPUT);   
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(redPin, HIGH);  
    digitalWrite(greenPin, HIGH); 
    digitalWrite(bluePin, HIGH); 
  } 
  else {
    // turn LED off:
    digitalWrite(redPin, LOW);  
    digitalWrite(greenPin, LOW); 
    digitalWrite(bluePin, LOW); 
  }
}
