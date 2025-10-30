# 🤖 Minicurso Arduino Básico

Este repositório contém o material didático, códigos-fonte e referências para o **Minicurso de Arduino Básico**, ministrado por Plácido Cordeiro durante a SECOMP UFAL.

O curso foi projetado para fornecer uma introdução prática e progressiva ao ecossistema Arduino, desde conceitos fundamentais de eletrônica até projetos integradores com múltiplos componentes.

---

## 🎯 Objetivo do Curso

Introduzir os fundamentos da programação e eletrônica com Arduino, desenvolvendo habilidades práticas desde conceitos simples até projetos integradores, permitindo que iniciantes criem seus primeiros sistemas embarcados funcionais.

---

## 📚 Estrutura do Minicurso

O material está organizado em módulos progressivos que combinam teoria e prática:

### **Módulo 1: Introdução à Eletrônica Digital**
- Alimentação direta de LEDs (5V)
- Controle de LEDs através de pinos digitais
- Primeiro programa: Blink com LED

### **Módulo 2: Comunicação e Controle Básico**
- Uso do Monitor Serial para debug
- Controle múltiplo de LEDs
- Implementação de semáforo simples

### **Módulo 3: Técnicas de Controle de Brilho**
- Introdução ao PWM (Modulação por Largura de Pulso)
- Controle de intensidade luminosa de LEDs

### **Módulo 4: Entradas Digitais**
- Leitura de botões com resistor pulldown externo
- Leitura de botões com resistor pullup externo
- Uso do pullup interno do Arduino

### **Módulo 5: Entradas Analógicas**
- Leitura de valores analógicos com potenciômetro
- Conversão de escalas usando função map()
- Controle de brilho de LED com potenciômetro

### **Módulo 6: Projeto Integrador**
- Sistema de controle com feedback visual
- Implementação de lógica com múltiplos estados
- Uso combinado de entradas analógicas e saídas digitais/PWM

---

## 🛠️ Requisitos

### **Pré-requisitos**
- Nenhum conhecimento prévio em eletrônica ou programação necessário

### **Hardware**
- Placa **Arduino UNO** (ou compatível)
- Protoboard
- LEDs, resistores, botões, jumpers e potenciômetro
- Cabo USB para conexão

### **Software**
- **Arduino IDE** (versão mais recente)
- Sistema Operacional: Windows, macOS ou Linux
- *Opcional:* Tinkercad ou Wokwi para simulação

---

## 📖 Como Usar este Repositório

1. **Clone o Repositório:**
   ```bash
   git clone https://github.com/placidocordeiro/minicurso-arduino-basico.git
   ```

2. **Navegue pela Estrutura:**
   - `docs/` - Material teórico (slides, textos de apoio)
   - `src/` - Códigos-fonte organizados por módulos

3. **Execute os Projetos:**
   - Abra os arquivos `.ino` na Arduino IDE
   - Conecte sua placa Arduino
   - Monte os circuitos conforme os diagramas
   - Compile e faça upload do código

---

## 📝 Licença

O **código-fonte** está sob licença **[MIT License](LICENSE)**.

O **conteúdo didático e documentação** estão sob licença **[Creative Commons Attribution 4.0 International (CC BY 4.0)](https://creativecommons.org/licenses/by/4.0/)**.

Você é livre para usar, modificar e compartilhar o material, desde que atribua o crédito ao autor original.
