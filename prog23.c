#include <stdio.h>

int main(void) {
    double a1, a2, a3, a4;

    printf("Digite os valores em ordem crescente.\n");
    
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &a2);
    while (a2 < a1) {
        printf("Erro! O numero deve ser maior ou igual a %g. Tente novamente: ", a1);
        scanf("%lf", &a2);
    }

    printf("Digite o terceiro numero: ");
    scanf("%lf", &a3);

    while (a3 < a2) {
        printf("Erro! O numero deve ser maior ou igual a %g. Tente novamente: ", a2);
        scanf("%lf", &a3);
    }

    printf("Digite o quarto numero: ");
    scanf("%lf", &a4);
    if (a4 >= a3) {
        printf("%g, %g, %g, %g\n", a1, a2, a3, a4);
    } 
    else if (a4 >= a2) {
        printf("%g, %g, %g, %g\n", a1, a2, a4, a3);
    } 
    else if (a4 >= a1) {
        printf("%g, %g, %g, %g\n", a1, a4, a2, a3);
    } 
    else {
        printf("%g, %g, %g, %g\n", a4, a1, a2, a3);
    }

    printf("\nA sequencia dos numeros em ordem crescente ficou: %.2lf, %.2lf, %.2lf, %.2lf.\n", a1, a2, a3, a4);

    return 0;

}