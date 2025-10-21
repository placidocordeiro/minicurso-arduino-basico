// --- CONTROLA O BRILHO DO LED COM A LEITURA DO POTENCIÔMETRO ---

const int pinoPot = A0;
const int pinoLed = 9; // Pino PWM (com ~)

void setup() {
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  // Ler o valor do potenciômetro (resultado: 0 a 1023).
  int valorLido = analogRead(pinoPot);

  // Converter a faixa de 0-1023 para a faixa de 0-255.
  int brilhoLed = map(valorLido, 0, 1023, 0, 255);

  // Usar o valor convertido para definir o brilho do LED.
  analogWrite(pinoLed, brilhoLed);
}
