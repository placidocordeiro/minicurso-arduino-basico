// --- RESISTOR COM PULL-UP EXTERNO ---

int pinoBotao = 2;
int pinoLed = 13;
int estadoBotao;

void setup() {
  // Configura o pino como entrada, sem ativar o pull-up interno
  pinMode(pinoBotao, INPUT);
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estadoBotao = digitalRead(pinoBotao);


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
 