const int ledPin = 12;
const int buttonPin = 2;
int etatSwitch = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
   
    if (etatSwitch == LOW) {
      etatSwitch = HIGH;
      } else if (etatSwitch == HIGH) {
      etatSwitch = LOW;
      }
    // raccourci pour ces 4-5 lignes :
    // etatSwitch = etatSwitch ? LOW : HIGH;
    
  }
  digitalWrite(ledPin, etatSwitch);
}
