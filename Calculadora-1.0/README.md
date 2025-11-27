# Calculadora Científica em C


## o que faz o programa ?

A calculadora permite ao usuário realizar:

- Operações aritméticas básicas (soma, subtração, multiplicação, divisão)
- Operações avançadas como:
  - Potência
  - Raiz quadrada
  - Logaritmos
  - Seno, cosseno, tangente e suas inversas
  - Exponencial
  - Valor absoluto
  - Fatorial
  - Hipotenusa
  - Porcentagem
  - Parte inteira

## Tecnologias utilizadas

- Linguagem C
- Biblioteca padrão: `stdio.h`
- Biblioteca matemática: `math.h`

## Como compilar e executar

Pré-requisitos:
- Ter um compilador C instalado, como o `gcc`

 Compilar:
```bash 
gcc calculadora.c -o calculadora -lm serve para linkar biblioteca matemática (math.h)
Para executar ./calculadora


=== Calculadora com 20 Operações ===
1. Soma (a + b)

Escolha uma opção: 1
Digite dois números: 1 3
Resultado: 4.000000


###O programa lida com alguns erros, como:

-Divisão por zero

-Raiz de número negativo

-Logaritmo de número não positivo

-O menu é apresentado repetidamente até que o usuário escolha a opção 0 para sair


### Informações adicionais que ajudam na compreensão do projeto

-O projeto foi desenvolvido com o objetivo de aplicar conhecimentos da linguagem C, especialmente no uso de estruturas de controle, funções, entrada e saída de dados e manipulação de bibliotecas matemáticas

-Diversas entradas foram testadas para garantir a precisão dos resultados
