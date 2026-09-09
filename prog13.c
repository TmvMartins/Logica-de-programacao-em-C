#include <stdio.h>

int main (void){

    double alimentos, dias;

    printf("Digite a quantedade de alimento em quilos: ");
    scanf("%lf", &alimentos);

    dias = alimentos/0.05;

    printf("Esses alimentos durarao %.0lf", dias);

    return 0;

}