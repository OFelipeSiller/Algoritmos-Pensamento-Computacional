#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função recursiva para fatorial
long long fatorialRec(int n) {
    if(n < 0) return -1;
    if(n == 0 || n == 1) return 1;
    return n * fatorialRec(n - 1);
}

// ==================== Operações matemáticas (void) ====================
void soma() {
    double a, b;
    printf("Digite dois números: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a + b);
}

void subtracao() {
    double a, b;
    printf("Digite dois números: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a - b);
}

void multiplicacao() {
    double a, b;
    printf("Digite dois números: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a * b);
}

void divisao() {
    double a, b;
    printf("Digite dois números: ");
    scanf("%lf %lf", &a, &b);
    if(b != 0) printf("Resultado: %.2lf\n", a / b);
    else printf("Erro: divisão por zero.\n");
}

void modulo() {
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    if(b != 0) printf("Resultado: %d\n", a % b);
    else printf("Erro: divisão por zero.\n");
}

void incremento() {
    double a;
    printf("Digite um número: ");
    scanf("%lf", &a);
    a++;
    printf("Incremento: %.2lf\n", a);
}

void decremento() {
    double a;
    printf("Digite um número: ");
    scanf("%lf", &a);
    a--;
    printf("Decremento: %.2lf\n", a);
}

void potenciacao() {
    double a, b;
    printf("Digite a base e o expoente: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", pow(a, b));
}

void raizQuadrada() {
    double a;
    printf("Digite um número: ");
    scanf("%lf", &a);
    if(a >= 0) printf("Raiz quadrada: %.2lf\n", sqrt(a));
    else printf("Erro: número negativo.\n");
}

void raizCubica() {
    double a;
    printf("Digite um número: ");
    scanf("%lf", &a);
    printf("Raiz cúbica: %.2lf\n", cbrt(a));
}

void valorAbsoluto() {
    double a;
    printf("Digite um número: ");
    scanf("%lf", &a);
    printf("Valor absoluto: %.2lf\n", fabs(a));
}

void restoDivReal() {
    double a, b;
    printf("Digite dois números: ");
    scanf("%lf %lf", &a, &b);
    printf("Resto da divisão real: %.2lf\n", fmod(a, b));
}

void seno() {
    double a;
    printf("Digite o ângulo em radianos: ");
    scanf("%lf", &a);
    printf("Seno: %.2lf\n", sin(a));
}

void cosseno() {
    double a;
    printf("Digite o ângulo em radianos: ");
    scanf("%lf", &a);
    printf("Cosseno: %.2lf\n", cos(a));
}

void tangente() {
    double a;
    printf("Digite o ângulo em radianos: ");
    scanf("%lf", &a);
    printf("Tangente: %.2lf\n", tan(a));
}

void logNatural() {
    double a;
    printf("Digite um número positivo: ");
    scanf("%lf", &a);
    if(a > 0) printf("Logaritmo natural: %.2lf\n", log(a));
    else printf("Erro: número não positivo.\n");
}

void logBase10() {
    double a;
    printf("Digite um número positivo: ");
    scanf("%lf", &a);
    if(a > 0) printf("Logaritmo base 10: %.2lf\n", log10(a));
    else printf("Erro: número não positivo.\n");
}

void exponencial() {
    double a;
    printf("Digite um número: ");
    scanf("%lf", &a);
    printf("Exponencial: %.2lf\n", exp(a));
}

void hipotenusa() {
    double a, b;
    printf("Digite dois números: ");
    scanf("%lf %lf", &a, &b);
    printf("Hipotenusa: %.2lf\n", hypot(a, b));
}

void fatorial() {
    int a;
    printf("Digite um inteiro: ");
    scanf("%d", &a);
    if(a >= 0) printf("Fatorial: %lld\n", fatorialRec(a));
    else printf("Erro: número negativo.\n");
}

// ==================== Operações com vetores (sem void) ====================
void lerVetor(double v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%lf", &v[i]);
    }
}

void imprimirVetor(double v[], int n) {
    printf("[ ");
    for(int i = 0; i < n; i++) printf("%.2lf ", v[i]);
    printf("]\n");
}

double somaVetor(double v[], int n) {
    double soma = 0;
    for(int i = 0; i < n; i++) soma += v[i];
    return soma;
}

double mediaVetor(double v[], int n) {
    return somaVetor(v, n) / n;
}

double maxVetor(double v[], int n) {
    double max = v[0];
    for(int i = 1; i < n; i++) if(v[i] > max) max = v[i];
    return max;
}

double minVetor(double v[], int n) {
    double min = v[0];
    for(int i = 1; i < n; i++) if(v[i] < min) min = v[i];
    return min;
}

double produtoEscalar(double v1[], double v2[], int n) {
    double produto = 0;
    for(int i = 0; i < n; i++) produto += v1[i] * v2[i];
    return produto;
}

// ==================== Função main ====================
int main() {
    int escolha;

    do {
        printf("\n=== SUPER CALCULADORA ===\n");
        printf("1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Módulo\n");
        printf("6. Incremento\n7. Decremento\n8. Potenciação\n9. Raiz Quadrada\n10. Raiz Cúbica\n");
        printf("11. Valor Absoluto\n12. Resto da divisão real\n13. Seno\n14. Cosseno\n15. Tangente\n");
        printf("16. Logaritmo natural\n17. Logaritmo base 10\n18. Exponencial\n19. Hipotenusa\n20. Fatorial\n");
        printf("21. Soma de elementos de vetor\n22. Média de vetor\n23. Máximo do vetor\n24. Mínimo do vetor\n25. Produto escalar de dois vetores\n");
        printf("0. Sair\nEscolha uma opção: ");
        scanf("%d", &escolha);

        switch(escolha) {
            case 1: soma(); break;
            case 2: subtracao(); break;
            case 3: multiplicacao(); break;
            case 4: divisao(); break;
            case 5: modulo(); break;
            case 6: incremento(); break;
            case 7: decremento(); break;
            case 8: potenciacao(); break;
            case 9: raizQuadrada(); break;
            case 10: raizCubica(); break;
            case 11: valorAbsoluto(); break;
            case 12: restoDivReal(); break;
            case 13: seno(); break;
            case 14: cosseno(); break;
            case 15: tangente(); break;
            case 16: logNatural(); break;
            case 17: logBase10(); break;
            case 18: exponencial(); break;
            case 19: hipotenusa(); break;
            case 20: fatorial(); break;
            case 21: {
                int n; printf("Quantos elementos no vetor? "); scanf("%d",&n);
                double v[n]; lerVetor(v,n); imprimirVetor(v,n);
                printf("Soma dos elementos: %.2lf\n", somaVetor(v,n));
                break;
            }
            case 22: {
                int n; printf("Quantos elementos no vetor? "); scanf("%d",&n);
                double v[n]; lerVetor(v,n); imprimirVetor(v,n);
                printf("Média: %.2lf\n", mediaVetor(v,n));
                break;
            }
            case 23: {
                int n; printf("Quantos elementos no vetor? "); scanf("%d",&n);
                double v[n]; lerVetor(v,n);
                printf("Máximo: %.2lf\n", maxVetor(v,n));
                break;
            }
            case 24: {
                int n; printf("Quantos elementos no vetor? "); scanf("%d",&n);
                double v[n]; lerVetor(v,n);
                printf("Mínimo: %.2lf\n", minVetor(v,n));
                break;
            }
            case 25: {
                int n; printf("Quantos elementos nos vetores? "); scanf("%d",&n);
                double v1[n], v2[n];
                printf("Vetor 1:\n"); lerVetor(v1,n);
                printf("Vetor 2:\n"); lerVetor(v2,n);
                printf("Produto escalar: %.2lf\n", produtoEscalar(v1,v2,n));
                break;
            }
            case 0: printf("Encerrando calculadora...\n"); break;
            default: printf("Opção inválida.\n");
        }

    } while(escolha != 0);

    return 0;
}


