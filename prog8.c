#include <stdio.h>
#include <math.h>

int main(void){

    float C;
    float T;
    float I;
    float M;

    printf("Digite o valor que esta querendo investir na poupanca: ");
    scanf("%f", &C);

    printf("Digite o periodo de tempo que ficara investido (em meses): ");
    scanf("%f", &T);

    I = 0.013;
   
    M = C*(pow(I+1, T));

    printf("O valor investido daqui a %.1f m sera de %.2f", T, M);

    return 0;
}