#include <stdio.h>
#include <math.h>

int main(void){

    double A, B, C, Delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    Delta = (B*B) - (4*A*C);
    
    if (Delta<0) {
        printf("Nao ha raiz real.\n");
    } 
    else if (Delta==0) {
        x1 = -B / (2 * A);
        printf("Existe uma unica raiz real: %.2lf\n", x1);
    }
    else {
        x1 = (-B + sqrt(Delta)) / (2 * A);
        x2 = (-B - sqrt(Delta)) / (2 * A);
        
        printf("Existem raizes reais.\n");
        printf("O valor da primeira raiz e %.2lf e o valor da segunda raiz e %.2lf\n", x1, x2);
    }
    return 0;
}