# 🎯 Jogo da Adivinhação (C++)

Um jogo simples em **C++** onde o jogador precisa adivinhar um número secreto gerado aleatoriamente.  
Feito para praticar lógica de programação, controle de fluxo e uso de bibliotecas básicas.

---

## 🕹️ Como o jogo funciona

1. O programa escolhe **um número secreto entre 1 e 100**.  
2. Você escolhe o **nível de dificuldade**:
   - 🟢 **Fácil (F)** → 15 tentativas  
   - 🟡 **Médio (M)** → 10 tentativas  
   - 🔴 **Difícil (D)** → 5 tentativas  
3. A cada tentativa, você faz um chute.  
4. O programa informa se o número secreto é **maior ou menor** que o seu chute.  
5. A pontuação começa em **1000 pontos** e diminui conforme a diferença entre o chute e o número secreto.

---

## 📊 Sistema de pontuação

A cada erro, você perde pontos com base na distância do chute. Quanto mais perto do número secreto, **menos pontos você perde!**

---

## 🧩 Tecnologias usadas

- Linguagem: **C++**
- Bibliotecas:
  - `<iostream>` — entrada e saída de dados  
  - `<cstdlib>` — geração de números aleatórios  
  - `<ctime>` — usa o tempo como semente do `rand()`

---

## ⚙️ Como compilar e executar



### 💻 Usando o terminal (MinGW / g++)
```bash
g++ Jogo-Da-Adivinhacao.cpp -o Jogo-Da-Adivinhacao.exe
./Jogo-Da-Adivinhacao.exe
```

---

## Contato

[Linkedin](www.linkedin.com/in/eduardo-domingues-blanco-7b5793346)
[Gmail](mailto:ed.domingues.blanco@gmail.com)