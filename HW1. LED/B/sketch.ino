volatile bool ledState = false; 

const int buttonPin = 2;        
const int ledPin = 8;        

unsigned long lastInterruptTime = 0;
bool lastState = false; 

void setup() {
  pinMode(ledPin, OUTPUT);       
  pinMode(buttonPin, INPUT);     
  attachInterrupt(digitalPinToInterrupt(buttonPin), toggleLED, CHANGE);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, ledState);

  if (ledState != lastState) {
    Serial.println(ledState ? "LED: on" : "LED: off");
    lastState = ledState;
  }
}

void toggleLED() {
  unsigned long currentTime = millis();
  if (currentTime - lastInterruptTime > 200) {
    ledState = !ledState;
    lastInterruptTime = currentTime;
  }
}
