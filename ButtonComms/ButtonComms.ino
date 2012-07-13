//Arduino sketch to utilize a physical button (set to pin #2)
//to output serial commands to some PC (together with the bundled python serial sniffer)
//and an RGB LED denoting activity
//by Dan Reed 7/13/12

const int buttonPin = 2;     // the number of the pushbutton pin
const int redPin =  6;      // the number of the red pin
const int greenPin =  5;      // the number of the green pin
const int bluePin =  3;      // the number of the blue pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  Serial.begin(9600);
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
  if (buttonState == HIGH) {     
    // turn LED on:    
    Serial.print(1);
    digitalWrite(redPin, HIGH);  
    digitalWrite(greenPin, HIGH); 
    digitalWrite(bluePin, HIGH); 
  } 
  else {
    // turn LED off:
    Serial.print(0);
    digitalWrite(redPin, LOW);  
    digitalWrite(greenPin, LOW); 
    digitalWrite(bluePin, LOW); 
  }
}
