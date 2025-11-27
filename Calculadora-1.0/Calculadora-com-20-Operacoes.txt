#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    double a, b, resultado;

    do {
        printf("\n=== Calculadora com 20 Operacoes ===\n");
        printf("1. Soma (a + b)\n");
        printf("2. Subtracao (a - b)\n");
        printf("3. Multiplicacao (a * b)\n");
        printf("4. Divisao (a / b)\n");
        printf("5. Potencia (a^b)\n");
        printf("6. Raiz quadrada (sqrt(a))\n");
        printf("7. Logaritmo natural (log(a))\n");
        printf("8. Logaritmo base 10 (log10(a))\n");
        printf("9. Exponencial (exp(a))\n");
        printf("10. Valor absoluto (fabs(a))\n");
        printf("11. Seno (sin(a))\n");
        printf("12. Cosseno (cos(a))\n");
        printf("13. Tangente (tan(a))\n");
        printf("14. Arco seno (asin(a))\n");
        printf("15. Arco cosseno (acos(a))\n");
        printf("16. Arco tangente (atan(a))\n");
        printf("17. Fatorial (inteiro positivo a)\n");
        printf("18. Parte inteira (floor(a))\n");
        printf("19. Porcentagem (calcula porcentagem)\n");
        printf("20. Hipotenusa (sqrt(a^2 + b^2))\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando a calculadora.\n");
            break;
        }

        switch(opcao) {
            case 1: // Soma
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &a, &b);
                resultado = a + b;
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 2: // Subtracao
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &a, &b);
                resultado = a - b;
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 3: // Multiplicacao
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &a, &b);
                resultado = a * b;
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 4: // Divisao
                printf("Digite dois numeros (dividendo e divisor): ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("Erro: divisao por zero nao e permitida.\n");
                } else {
                    resultado = a / b;
                    printf("Resultado: %.6lf\n", resultado);
                }
                break;
            case 5: // Potencia
                printf("Digite a base e o expoente: ");
                scanf("%lf %lf", &a, &b);
                resultado = pow(a, b);
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 6: // Raiz quadrada
                printf("Digite um numero: ");
                scanf("%lf", &a);
                if (a < 0) {
                    printf("Erro: nao existe raiz quadrada de numero negativo.\n");
                } else {
                    resultado = sqrt(a);
                    printf("Resultado: %.6lf\n", resultado);
                }
                break;
            case 7: // Logaritmo natural
                printf("Digite um numero: ");
                scanf("%lf", &a);
                if (a <= 0) {
                    printf("Erro: logaritmo de numero nao positivo nao e definido.\n");
                } else {
                    resultado = log(a);
                    printf("Resultado: %.6lf\n", resultado);
                }
                break;
            case 8: // Logaritmo base 10
                printf("Digite um numero: ");
                scanf("%lf", &a);
                if (a <= 0) {
                    printf("Erro: logaritmo de numero nao positivo nao e definido.\n");
                } else {
                    resultado = log10(a);
                    printf("Resultado: %.6lf\n", resultado);
                }
                break;
            case 9: // Exponencial
                printf("Digite um numero: ");
                scanf("%lf", &a);
                resultado = exp(a);
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 10: // Valor absoluto
                printf("Digite um numero: ");
                scanf("%lf", &a);
                resultado = fabs(a);
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 11: // Seno
                printf("Digite um angulo em radianos: ");
                scanf("%lf", &a);
                resultado = sin(a);
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 12: // Cosseno
                printf("Digite um angulo em radianos: ");
                scanf("%lf", &a);
                resultado = cos(a);
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 13: // Tangente
                printf("Digite um angulo em radianos: ");
                scanf("%lf", &a);
                resultado = tan(a);
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 14: // Arco seno
                printf("Digite um numero entre -1 e 1: ");
                scanf("%lf", &a);
                if (a < -1 || a > 1) {
                    printf("Erro: valor fora do dominio do arco seno.\n");
                } else {
                    resultado = asin(a);
                    printf("Resultado (radianos): %.6lf\n", resultado);
                }
                break;
            case 15: // Arco cosseno
                printf("Digite um numero entre -1 e 1: ");
                scanf("%lf", &a);
                if (a < -1 || a > 1) {
                    printf("Erro: valor fora do dominio do arco cosseno.\n");
                } else {
                    resultado = acos(a);
                    printf("Resultado (radianos): %.6lf\n", resultado);
                }
                break;
            case 16: // Arco tangente
                printf("Digite um numero: ");
                scanf("%lf", &a);
                resultado = atan(a);
                printf("Resultado (radianos): %.6lf\n", resultado);
                break;
            case 17: { // Fatorial
                int n, fatorial = 1;
                printf("Digite um inteiro positivo: ");
                scanf("%d", &n);
                if (n < 0) {
                    printf("Erro: fatorial nao definido para numeros negativos.\n");
                } else {
                    for (int i = 1; i <= n; i++) {
                        fatorial *= i;
                    }
                    printf("Resultado: %d\n", fatorial);
                }
                break;
            }
            case 18: // Parte inteira (floor)
                printf("Digite um numero: ");
                scanf("%lf", &a);
                resultado = floor(a);
                printf("Resultado: %.0lf\n", resultado);
                break;
            case 19: // Porcentagem
                printf("Digite o valor total e a porcentagem: ");
                scanf("%lf %lf", &a, &b);
                resultado = (a * b) / 100.0;
                printf("Resultado: %.6lf\n", resultado);
                break;
            case 20: // Hipotenusa
                printf("Digite os catetos a e b: ");
                scanf("%lf %lf", &a, &b);
                resultado = hypot(a, b);
                printf("Resultado (hipotenusa): %.6lf\n", resultado);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (1);

    return 0;
}
