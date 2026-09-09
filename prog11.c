#include <stdio.h>

int main (void){

    double r;
    double C;

    printf("Digite o valor do raio: ");
    scanf("%lf", &r);

    C = 2*r*3.14;

    printf("O valor do comprimento desta circunferencia e de: %.2lf", C);

    return 0;
}