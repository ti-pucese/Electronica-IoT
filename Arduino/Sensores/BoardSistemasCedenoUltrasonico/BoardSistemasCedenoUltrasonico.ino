const int trigPin = 10;
const int echoPin = 11;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); // El Trig envía el pulso
  pinMode(echoPin, INPUT);  // El Echo recibe el pulso
}

void loop() {
  // Limpiar el pin Trig
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Enviar un pulso de 10 microsegundos
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Leer el tiempo que tardó en regresar el eco (en microsegundos)
  long duracion = pulseIn(echoPin, HIGH);

  // Calcular la distancia: Velocidad del sonido (0.034 cm/us) / 2
  int distancia = duracion * 0.034 / 2;

  // Mostrar en el Monitor Serie
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(500); // Esperar medio segundo para la siguiente lectura
}