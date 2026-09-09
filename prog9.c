#include <stdio.h>

int main(void){

    double a1;
    double a2;
    double S2;

    printf("Digite o valor do primeiro numero: ");
    scanf("%lf", &a1);

    printf("Digite o valor do segundo numero: ");
    scanf("%lf", &a2);

    S2 = (a1*a1) + (a2*a2); 

    printf("A soma dos quadrados desses dois numeros e de: %.2lf", S2);

    return 0;
}