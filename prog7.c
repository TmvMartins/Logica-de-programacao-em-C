#include <stdio.h>

int main(void){

    float c;
    float l;
    float h;

    printf("Digite o valor do comprimento: ");
    scanf("%f", &c);

    printf("Digite o valor da largura: ");
    scanf("%f", &l);

    printf("Digite a altura: ");
    scanf("%f", &h);

    float A;

    A = c*l*h;

    printf("O volume deste paralelepipedo e de: %.2f", A);

    return 0;
}