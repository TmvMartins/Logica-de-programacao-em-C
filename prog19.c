#include <stdio.h>

int main(void){

    double a1,a2;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &a1);

    printf("Digite o segundo valor: ");
    scanf("%lf", &a2);

    if (a1>a2) {
        printf("O maior valor e %.1lf", a1);
    } 
    else if (a1<a2){
        printf("O maior valor e %.1lf", a2);
    }
    else {
        printf("Os dois valores sao iguais.");
    }
    
    return 0;
}