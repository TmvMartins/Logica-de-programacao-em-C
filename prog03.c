#include <stdio.h>

int main(void){

    float base;
    float lado;
    float area;

    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor do lado: ");
    scanf("%f", &lado);

    area = (base * lado)/2;

    printf("O valor da area deste triangulo e: %.2f\n", area);

    return 0;
}
