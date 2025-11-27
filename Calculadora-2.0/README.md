Super Calculadora C

Esta é uma calculadora interativa desenvolvida em C que oferece um vasto conjunto de funcionalidades, desde operações aritméticas básicas até cálculos avançados (trigonometria, logaritmos) e manipulação de vetores.

Funcionalidades

A Calculadora 2.0 possui 25 opções, acessíveis através de um menu interativo:

Operações Aritméticas e Básicas

Soma

Subtração

Multiplicação

Divisão (com tratamento de divisão por zero)

Módulo (para números inteiros)

Incremento

Decremento

Resto da divisão real (fmod)

Funções Matemáticas Avançadas (<math.h>)

Potenciação

Raiz Quadrada (com tratamento para números negativos)

Raiz Cúbica

Valor Absoluto

Seno

Cosseno

Tangente

Logaritmo natural (com tratamento para números não positivos)

Logaritmo base 10 (com tratamento para números não positivos)

Exponencial

Hipotenusa (Cálculo de sqrt(a² + b²))

Fatorial (implementado de forma recursiva)

Operações com Vetores

Soma de elementos de vetor

Média de vetor

Máximo do vetor

Mínimo do vetor

Produto escalar de dois vetores

Requisitos

Para compilar e executar este programa, você precisará de:

Um compilador C (como GCC, Clang, etc.).

A biblioteca padrão C e a biblioteca matemática (math.h).


Estrutura do Código

O projeto é altamente modularizado, com funções específicas para cada cálculo, facilitando a manutenção.

Fatorial: Utiliza uma função recursiva (fatorialRec) para o cálculo.

Tratamento de Erros: Inclui verificações para evitar erros comuns, como divisão por zero e raízes/logaritmos de números inválidos.

Vetores: A entrada e saída de dados de vetores são gerenciadas pelas funções lerVetor e imprimirVetor.

Nota Técnica Importante:

O código utiliza Variable-Length Arrays (VLA) (double v[n];) para as operações de vetor, o que pode causar stack overflow se o usuário inserir um número muito grande de elementos. Para maior robustez e portabilidade, seria recomendado refatorar as seções de vetor para usar alocação dinâmica de memória (com malloc).