const int led_red = 5;
const int led_green = 10;
const int buttonPin = 2;

int buttonState = 0;
int lastButtonState = 0;
int count = 1;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
 
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH && count%2 != 0) {
      digitalWrite(led_red, HIGH);
      digitalWrite(led_green, LOW);
      count = count + 1;
      delay(200);
    }
    else if (buttonState == HIGH && count%2 ==0){
      digitalWrite(led_red, LOW);
      digitalWrite(led_green, HIGH);
      count = count + 1;
      delay(200);
    }
  }
  lastButtonState = buttonState;
}
