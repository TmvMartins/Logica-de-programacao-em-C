#include <stdio.h>

int main(void) {
    double a1, a2;

    printf("Digite os valores em ordem crescente.\n");
    
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &a2);
    while (a2 < a1) {
        printf("Erro! O numero deve ser maior ou igual a %g. Tente novamente: ", a1);
        scanf("%lf", &a2);
    }

    printf("\nA sequencia dos numeros em ordem crescente ficou: %.2lf, %.2lf.\n", a1, a2);

    return 0;
}
