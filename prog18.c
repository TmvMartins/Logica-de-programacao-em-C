#include <stdio.h>

int main (void){

    double a1;
    double a2;
    double Dif;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &a1);

    printf("Digite o segundo valor: ");
    scanf("%lf", &a2);

    if (a1>a2) {
        Dif = a1-a2;
    }
    else {
        Dif = a2-a1;
    }

        printf("A diferenca entre os numeros e de: %.2lf\n", Dif);

    return 0;
}