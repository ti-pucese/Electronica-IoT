const int buzzerPin = 5; // Pin donde está conectado el buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT); // 
}

void loop() {
  // Encender el buzzer
  digitalWrite(buzzerPin, HIGH); 
  delay(500); // Sonido de medio segundo

  // Apagar el buzzer
  digitalWrite(buzzerPin, LOW);  
  delay(1000); // Silencio por un segundo
}