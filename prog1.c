#include <stdio.h>

int main(void){

    float l1;
    float A;
    
    printf("Digite o numero de uns dos lados de um quadrado: ");
    scanf("%f", &l1);
    
    A = l1 * l1;
    
    printf("O valor da �rea deste quadrado �: %.1f\n", A);
    
    return 0;
}
