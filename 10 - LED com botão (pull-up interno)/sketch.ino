// --- BOTÃO COM RESISTOR PULL-UP INTERNO ---

const int pinoBotao = 2;
const int pinoLed = 13;

void setup() {
  pinMode(pinoLed, OUTPUT);
  // Configura o pino 2 como entrada E ativa o resistor de pull-up interno.
  pinMode(pinoBotao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int estadoBotao = digitalRead(pinoBotao);

  // Atente-se, pois a lógica é ao contrário
  // Como é pull-up, o estado normal é HIGH. Pressionar conecta ao GND.
  // Portanto, se o estado for LOW, significa que o botão está pressionado.
  if (estadoBotao == HIGH) {
    // Ação quando o botão não está pressionado
    digitalWrite(pinoLed, !estadoBotao);
    Serial.println("Botão solto");
  } else {
    // Ação quando o botão é pressionado
    digitalWrite(pinoLed, !estadoBotao);
    Serial.println("Botão pressionado");
  }
}
