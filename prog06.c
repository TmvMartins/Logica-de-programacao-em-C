#include <stdio.h>

int main(void){

    float x;
    float y;
    float temp;

    printf("Digite o valor de x:\n");
    scanf("%f", &x);
    
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    temp = x;
    x = y; 
    y = temp;

    printf("Apos a troca o valor de x e: %.2f\n", x);
    printf("Apos a troca o valor de y e: %.2f", y);

    return 0;

}
