// --- CONTROLANDO LED COM PINO DIGITAL ---

void setup() {
  // Configura o pino 8 como uma saída digital.
  pinMode(8, OUTPUT);
}

void loop() {
  // Envia 5V para o pino 8, acendendo o LED.
  digitalWrite(8, HIGH);
  
  // Como não há mais nenhum comando no loop, o LED permanecerá aceso.
}
