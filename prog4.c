#include <stdio.h>

int main(void){

    float C;
    float F;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &C);

    F = (9*C+160)/5;

    printf("A temperatura em graus fahrenheit e de: %.2f", F);

    return 0;
}