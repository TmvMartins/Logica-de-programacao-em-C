#include <stdio.h>

int main(void){

    double htrab, valorh, desconto1, descendentes, bruto, liquido;

  
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%lf", &htrab);

    printf("Digite o valor correspondente a uma hora: ");
    scanf("%lf", &valorh);

    printf("Digite o percentual do desconto: ");
    scanf("%lf", &desconto1);

    printf("Digite a quantidade de descendentes: ");
    scanf("%lf", &descendentes);
    
    bruto = htrab*valorh;
    liquido = (bruto - (bruto * (desconto1 / 100))) + (100 * descendentes);

    printf("Seu salario bruto: %.2lf\n", bruto);

    printf("Seu salario liquido a receber e de: %.2lf\n", liquido);

    return 0;
}