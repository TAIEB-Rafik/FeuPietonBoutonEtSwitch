// Initialisation des constantes pour les LED
const int rouge = 12;
const int orange = 11;
const int verte = 10;

const int rougePieton = 9;
const int vertePieton = 8;


// Numéro de la broche à laquelle est connecté le bouton poussoir
const int bouton = 2;

// Déclaration des variables :
int etatBouton = 0;


// le code dans cette fonction est exécuté une fois au début
void setup() {
  // indique que les broches des LED
  // sont des sorties :
  pinMode(rouge, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(verte, OUTPUT);
  
  pinMode(rougePieton, OUTPUT);
  pinMode(vertePieton, OUTPUT);
  
  // indique que la broche bouton est une entrée :
  pinMode(bouton, INPUT);
}

// le code dans cette fonction est exécuté en boucle
void loop() {
  // Dans le fonctionnement normal, le feu piéton est toujours rouge
  digitalWrite(rougePieton, HIGH);
  
  // Fonctionnement normal du feu voiture  
  digitalWrite(verte, HIGH);
  delay(3000);
  digitalWrite(verte, LOW);  
  
  // lit l'état du bouton et stocke le résultat
  // dans etatBouton :
  etatBouton = digitalRead(bouton);

  // Si etatBouton est égal à HIGH
  // c'est que le bouton est appuyé
  if (etatBouton == HIGH) {
    digitalWrite(orange, HIGH);
    delay(1000);
    digitalWrite(orange, LOW);
  
    digitalWrite(rouge, HIGH);
    
    // Le feu piéton passe au vert pendant 5s
    digitalWrite(rougePieton, LOW);
    digitalWrite(vertePieton, HIGH);
    
    delay(5000);
    
    // On remet le feu piéton au rouge
    digitalWrite(rougePieton, HIGH);
    digitalWrite(vertePieton, LOW);
    
    // Puis on s'assure que le feu voiture est éteint
    digitalWrite(rouge, LOW);
  }
  else {
    // Fonctionnement normal du feu voiture
    digitalWrite(orange, HIGH);
    delay(1000);
    digitalWrite(orange, LOW);
  
    digitalWrite(rouge, HIGH);
    delay(3000);
    digitalWrite(rouge, LOW);
  }
}
