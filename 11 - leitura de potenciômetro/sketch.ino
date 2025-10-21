// --- LÊ O VALOR ANALÓGICO VINDO DO POTENCIÔMETRO ---
const int pinoPot = A0; // O pino do meio do potenciômetro vai no pino A0.

void setup() {
  // Inicia o monitor serial para visualizarmos os dados.
  Serial.begin(9600);
}

void loop() {
  // Lê o valor do pino A0.
  int valorLido = analogRead(pinoPot);

  Serial.print("Valor lido: ");
  Serial.println(valorLido);

  delay(100); // Pausa para não sobrecarregar o monitor.
}
