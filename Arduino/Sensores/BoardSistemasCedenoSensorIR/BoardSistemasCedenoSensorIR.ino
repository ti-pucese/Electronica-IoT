const int sensorIR = 6; // Pin OUT

void setup() {
  Serial.begin(9600);
  pinMode(sensorIR, INPUT);
  Serial.println("Sensor IR listo...");
}

void loop() {
  // Leemos el sensor (LOW = Detectado, HIGH = Nada)
  int estado = digitalRead(sensorIR);

  if (estado == LOW) {
    Serial.println("¡Objeto Detectado!");
  } else {
    Serial.println("Camino despejado");
  }

  delay(200); // Pequeña pausa para no saturar el monitor serie
}