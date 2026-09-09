#include <stdio.h>
#include <math.h>

int main(void){

    double cat1,cat2,hipo;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%lf", &cat1);   
    
    printf("Digite o valor do segundo cateto: ");
    scanf("%lf", &cat2);

    hipo = sqrt((cat1*cat1) + (cat2*cat2));

    printf("A hipotenusa desse triangulo retangulo e de: %.2lf", hipo);

    return 0;
}