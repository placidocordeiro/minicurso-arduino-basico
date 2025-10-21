// --- CONTROLA O BRILHO DE UM LED COM UM PINO PWM ---

int ledPino = 9;      // Pino PWM onde o LED está conectado
int brilho = 0;       // Variável para armazenar o brilho atual
int incremento = 5;   // O quanto o brilho muda a cada passo

void setup() {
  // Não é necessário usar pinMode para pinos usados com analogWrite,
  // mas é uma boa prática para clareza.
  pinMode(ledPino, OUTPUT);
}

void loop() {
  // Escreve o valor do brilho atual no pino do LED
  analogWrite(ledPino, brilho);

  // Altera o brilho para o próximo passo
  brilho = brilho + incremento;

  // Inverte a direção do incremento quando o brilho
  // atinge o mínimo (0) ou o máximo (255)
  if (brilho <= 0 || brilho >= 255) {
    incremento = -incremento; // Se era 5, vira -5. Se era -5, vira 5.
  }

  // Pequeno delay para que o efeito de fade seja visível
  delay(50);
}
