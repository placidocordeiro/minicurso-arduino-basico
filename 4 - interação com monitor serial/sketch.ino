// --- PRINTA MENSAGEM NO MONITOR SERIAL AO LONGO DA EXECUÇÃO DO PROGRAMA ---

void setup() {
  // Inicia a comunicação serial na velocidade de 9600 bps.
  Serial.begin(9600);
  // Configura o pino 8 como uma saída digital.
  pinMode(8, OUTPUT);
  // Printa a mensagem no monitor serial ao inicializar Arduino
  Serial.println("Monitor Serial iniciado.");
}

void loop() {
  digitalWrite(8, HIGH);          // Acende o LED
  delay(500);                     // Espera meio segundo (500 milissegundos)
  Serial.println("LED aceso!");   // Printa a mensagem no monitor serial

  digitalWrite(8, LOW);           // Apaga o LED
  delay(500);                     // Espera meio segundo com ele apagado
  Serial.println("LED apagado!"); // Printa a mensagem no monitor serial
}
