#include <stdio.h>
#include <math.h>

int main(void){

    float A;
    float B;
    float C;
    float delta;

    printf("Digite o valor do coeficiente A: ");
    scanf("%f", &A);

    printf("Digite o valor do coeficiente B: ");
    scanf("%f", &B);

    printf("Digite o valor do coeficiente C: ");
    scanf("%f", &C);

    delta = (B*B) - (4*A*C);

    printf("o valor do delta sera: %.2f\n", delta);

    float X1;
    float X2;
    float raiz;

    raiz = sqrt(delta);

    X1 = (-B + raiz) / (2*A);
    X2 = (-B - raiz) / (2*A);

    printf("O valor da primeira raiz e de: %.2f\n", X1);
    printf("O valor da segunda raiz e de: %.2f", X2);

    return 0;

}
