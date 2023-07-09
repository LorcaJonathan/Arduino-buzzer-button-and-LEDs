int buzzerPin = 9;    // Pin utilizado para el buzzer
int pulsadorPin = 5;  // Pin utilizado para el pulsador
int ledVerde = 13;    // Pin utilizado para el LED verde
int ledRojo = 12;     // Pin utilizado para el LED rojo

void setup() {
  pinMode(buzzerPin, OUTPUT);    // Configura el pin del buzzer como salida
  pinMode(pulsadorPin, INPUT);   // Configura el pin del pulsador como entrada
  pinMode(ledVerde, OUTPUT);     // Configura el pin del LED verde como salida
  pinMode(ledRojo, OUTPUT);      // Configura el pin del LED rojo como salida
}

void loop() {
  if (digitalRead(pulsadorPin) == HIGH) {
    // Si se detecta un estado alto (HIGH) en el pin del pulsador:
    tone(buzzerPin, 1000);       // Genera un tono en el buzzer con frecuencia de 1000 Hz
    digitalWrite(ledRojo, HIGH); // Enciende el LED rojo
    digitalWrite(ledVerde, LOW); // Apaga el LED verde
  }
  else {
    // Si no se detecta un estado alto (HIGH) en el pin del pulsador:
    noTone(buzzerPin);           // Detiene la generación del tono en el buzzer
    digitalWrite(ledVerde, HIGH);// Enciende el LED verde
    digitalWrite(ledRojo, LOW);  // Apaga el LED rojo
  }
}
