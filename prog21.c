#include <stdio.h>

int main (void){

    double nota1, nota2, nota3, nota4, M;

    printf("Digite a nota do 1 bimestre: ");
    scanf("%lf", &nota1);

    printf("Digite a nota do 2 bimestre: ");
    scanf("%lf", &nota2);

    printf("Digite a nota do 3 bimestre: ");
    scanf("%lf", &nota3);

    printf("Digite a nota do 4 bimestre: ");
    scanf("%lf", &nota4);

    M = (nota1+nota2+nota3+nota4)/4;

    if (M >= 6) {
        printf("Sua media foi de %.2lf\n", M);
        printf("APROVADO");
    } 
    else if (M < 3) {
        printf("Sua media foi de %.2lf\n", M);
        printf("RETIDO");
    }
    else {
        printf("Sua media foi de %.2lf\n", M);
        printf("EXAME");
    }

    return 0;
}