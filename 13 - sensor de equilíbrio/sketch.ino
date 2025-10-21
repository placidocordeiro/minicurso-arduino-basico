// --- TENTE ACHAR O VALOR DE EQUILÍBRIO CALIBRANDO O POTENCIÔMENTRO COM BASE NOS SINAIS DOS LEDS ---

// Planejamento: Definição dos pinos 
const int pinoPot = A0;
const int pinoLedVermelho = 8;
const int pinoLedAmarelo = 9;
const int pinoLedVerde = 10;

// Variáveis de Estado
// Guardam o estado que os LEDs DEVEM ter, mas não os alteram diretamente.
int estadoLedVermelho = LOW;
int estadoLedAmarelo = LOW;
int estadoLedVerde = LOW;

// Guarda a velocidade do pisca em milissegundos. 0 significa "aceso fixo".
int velocidadePisca = 0;

// Definição do alvo e das margens 
int pontoDeEquilibrio = 512;
int margemEquilibrio = 25;
int margemProximo = 150;

void setup() {
  // Configura os pinos dos LEDs como saídas.
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoLedVerde, OUTPUT);
}

void loop() {
  // PARTE 1: LÓGICA DE DECISÃO 
  // Esta parte do código apenas LÊ os sensores e ATUALIZA as variáveis de estado.
  // Ela não aciona nenhum pino ou usa delays.

  int valorLido = analogRead(pinoPot);
  int distancia = abs(valorLido - pontoDeEquilibrio);

  // SE a distância for menor ou igual à margem de equilíbrio...
  if (distancia <= margemEquilibrio) {
    // Define o estado para "Equilíbrio": Verde aceso fixo.
    estadoLedVerde = HIGH;
    estadoLedAmarelo = LOW;
    estadoLedVermelho = LOW;
    velocidadePisca = 0; // 0 = sem pisca
  }
  // SENÃO, SE a distância for menor que a margem de proximidade...
  else if (distancia < margemProximo) {
    // Define o estado para "Proximidade": Amarelo pisca lentamente.
    estadoLedVerde = LOW;
    estadoLedAmarelo = HIGH;
    estadoLedVermelho = LOW;
    velocidadePisca = 400; // Pisca lento
  }
  // SENÃO (está longe)...
  else {
    // Define o estado para "Distante": Vermelho pisca rapidamente.
    estadoLedVerde = LOW;
    estadoLedAmarelo = LOW;
    estadoLedVermelho = HIGH;
    velocidadePisca = 100; // Pisca rápido
  }

  // PARTE 2: AÇÃO
  // Esta parte do código apenas LÊ as variáveis de estado e ATUA nos LEDs.
  // Ela não precisa saber da lógica do potenciômetro ou das margens.

  // Se a velocidade for 0, é um estado fixo (apenas o LED verde).
  if (velocidadePisca == 0) {
    digitalWrite(pinoLedVerde, estadoLedVerde);
    digitalWrite(pinoLedAmarelo, estadoLedAmarelo);
    digitalWrite(pinoLedVermelho, estadoLedVermelho);
  }
  // Se a velocidade for maior que 0, é um estado de pisca.
  else {
    // Liga o LED correto (determinado pelas variáveis de estado).
    digitalWrite(pinoLedVerde, estadoLedVerde);
    digitalWrite(pinoLedAmarelo, estadoLedAmarelo);
    digitalWrite(pinoLedVermelho, estadoLedVermelho);
    delay(velocidadePisca); // Espera o tempo do pisca

    // Desliga todos os LEDs para completar o ciclo do pisca.
    digitalWrite(pinoLedVerde, LOW);
    digitalWrite(pinoLedAmarelo, LOW);
    digitalWrite(pinoLedVermelho, LOW);
    delay(velocidadePisca); // Espera o mesmo tempo apagado
  }
}
