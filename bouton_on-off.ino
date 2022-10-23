const int bouton = 7;
const int led = LED_BUILTIN;


void setup() {

  pinMode(led, OUTPUT);
    pinMode(bouton, INPUT);
}

void loop() {
  int etatBouton = 0;
etatBouton = digitalRead(bouton);

  // Si etatBouton est égal à HIGH
  // c'est que le bouton est appuyé
  if (etatBouton == HIGH) {
    digitalWrite(led, HIGH);}
  else {
digitalWrite(led, LOW);}
}
