int sensorPin=A5;  //modificar A5 en caso de que el sensor no esté conectado a dicho pin

void setup() {
  Serial.begin(9600);

}

void loop() {
  int humedad = analogRead(sensorPin);
  Serial.println(humedad);
  delay(1000);

}
