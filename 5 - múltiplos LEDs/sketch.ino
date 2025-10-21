// --- CONTROLA VÁRIOS LEDS DE UMA VEZ ---

void setup() {
  // Configura todos os três pinos como saídas.
  pinMode(10, OUTPUT); // LED Vermelho
  pinMode(9, OUTPUT);  // LED Amarelo
  pinMode(8, OUTPUT);  // LED Verde
}

void loop() {
  // 1ª parte da sequência: acende o Verde
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(8, LOW);

  // 2ª parte da sequência: acende o Amarelo
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(9, LOW);

  // 3ª parte da sequência: acende o Vermelho
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(10, LOW);
}
