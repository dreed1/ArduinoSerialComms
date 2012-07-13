
// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int redPin =  6;      // the number of the red pin
const int greenPin =  5;      // the number of the green pin
const int bluePin =  3;      // the number of the blue pin
boolean buttonPressed;
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
  buttonPressed = false;
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if(Serial.available() > 0){
    recieveSerialInput();
  }
  if (buttonState == HIGH) {  
    if(!buttonPressed){
      buttonPressed = true;
    }   
    // turn LED on:    
    Serial.print(0);
    analogWrite(redPin, 255);  
    analogWrite(greenPin, 12); 
    analogWrite(bluePin, 15); 
    
  } 
  else {
    if(buttonPressed){
      buttonPressed = false;
     Serial.print(1); 
    }
    else{
      Serial.print(0);  
    }
    // turn LED off:
  }
}

void recieveSerialInput(){
  boolean serialFinished = false;
  int incoming;
  int length=10;
  while(!serialFinished){
    
    incoming = Serial.parseInt();
    Serial.print(incoming);
    if(incoming==2){
      analogWrite(redPin, 255);  
      analogWrite(greenPin, 0); 
      analogWrite(bluePin, 0);
    }
    else if(incoming==3){
      analogWrite(redPin, 180);  
      analogWrite(greenPin, 57); 
      analogWrite(bluePin, 0);
    }
    else if(incoming ==4){
      serialFinished = true;
      analogWrite(redPin, 0);  
      analogWrite(greenPin, 255); 
      analogWrite(bluePin, 0);
      delay(2000); 
      for(int i=0;i<25;i++){
        analogWrite(redPin, 0);  
        analogWrite(greenPin, 255); 
        analogWrite(bluePin, 0);
        delay(100);
        analogWrite(redPin, 0);  
        analogWrite(greenPin, 0); 
        analogWrite(bluePin, 0);
        delay(100);
      }
    }
  }
}
