// --- PISCA O LED A CADA MEIO SEGUNDO ---

void setup() {
  // Configura o pino 8 como uma saída digital.
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);  // Acende o LED
  delay(500);             // Espera meio segundo (500 milissegundos)
  
  digitalWrite(8, LOW);   // Apaga o LED
  delay(500);             // Espera meio segundo com ele apagado
}
