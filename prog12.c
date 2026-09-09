#include <stdio.h>

int main (void){

    double Anoatu, Nasci, idade, futuro;
    
    idade = Anoatu - Nasci;

    futuro = idade + 17;

    printf("Digite o ano da sua data de nascimento: ");
    scanf ("%lf", &Nasci);

    printf("Digite o ano atual: ");
    scanf("%lf", &Anoatu);

    printf("Atualmente voce tem %.0lf anos de idade e daqui 17 anos no futuro voce tera: %.0lf", idade, futuro);

    return 0;
}