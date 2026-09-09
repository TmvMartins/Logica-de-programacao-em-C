#include <stdio.h>

int main(void)
{
    float sal;
    float reajust;
    
    printf("Digite o valor do seu salario: ");
    scanf("%f", &sal);

    reajust = sal * 1.15;
   
    printf("Seu salario apos o reajuste e de: %.2f", reajust);
  
    return 0;
}