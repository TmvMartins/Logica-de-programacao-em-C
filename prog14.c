#include <stdio.h>

int main(void){

    double a1,a2,a3;

    printf("Digite o valor do primeiro angulo: ");
    scanf("%lf", &a1);
    printf("Digite o valor do segundo angulo: ");
    scanf("%lf", &a2);

    a3 = -(a1+a2-180);

    printf("O valor do terceiro angulo sera de: %.2lf", a3);
    return 0;
}