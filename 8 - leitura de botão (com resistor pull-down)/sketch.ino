// --- BOTÃO COM RESISTOR PULL-DOWN ---

int pinoBotao = 2;
int pinoLed = 13;
int estadoBotao;

void setup() {
  // Configura o pino como entrada
  pinMode(pinoBotao, INPUT);
  // Configura o pino como saída
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estadoBotao = digitalRead(pinoBotao);

  if (estadoBotao == LOW) {
    // Ação quando o botão não está pressionado
    digitalWrite(pinoLed, estadoBotao);
    Serial.println("Botão solto");
  } else {
    // Ação quando o botão é pressionado
    digitalWrite(pinoLed, estadoBotao);
    Serial.println("Botão pressionado");
  }
}
