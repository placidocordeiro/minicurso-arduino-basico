// --- IMPLEMENTAÇÃO DE UM SEMÁFORO COM 3 LEDS ---

// Planejamento: Definição dos pinos usando variáveis
const int pinoLedVermelho = 8;
const int pinoLedAmarelo = 9;
const int pinoLedVerde = 10;

// Lógica: Definição dos tempos de cada estado (em milissegundos)
int tempoVerde = 5000;      // 5 segundos
int tempoAmarelo = 2000;    // 2 segundos
int tempoVermelho = 5000;   // 5 segundos
int tempoAlerta = 1500;     // 1.5 segundos para o Vermelho + Amarelo

void setup() {
  // Configura todos os pinos dos LEDs como saídas.
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoLedVerde, OUTPUT);
}

void loop() {
  // Estado 1: Sinal Verde (Siga)
  digitalWrite(pinoLedVerde, HIGH);
  digitalWrite(pinoLedAmarelo, LOW);
  digitalWrite(pinoLedVermelho, LOW);
  delay(tempoVerde);

  // Estado 2: Sinal Amarelo (Atenção, vai fechar)
  digitalWrite(pinoLedVerde, LOW);
  digitalWrite(pinoLedAmarelo, HIGH);
  digitalWrite(pinoLedVermelho, LOW);
  delay(tempoAmarelo);

  // Estado 3: Sinal Vermelho (Pare)
  digitalWrite(pinoLedVerde, LOW);
  digitalWrite(pinoLedAmarelo, LOW);
  digitalWrite(pinoLedVermelho, HIGH);
  delay(tempoVermelho);

  // Estado 4: Alerta para Abrir (Vermelho + Amarelo)
  digitalWrite(pinoLedVerde, LOW);
  digitalWrite(pinoLedAmarelo, HIGH);   // Amarelo acende junto
  digitalWrite(pinoLedVermelho, HIGH);  // Vermelho continua aceso
  delay(tempoAlerta);

  // Fim do código do loop. Ele irá recomeçar automaticamente do início,
  // voltando para o Estado 1 e criando o ciclo contínuo.
}
