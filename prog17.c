#include <stdio.h>

int main (void){

    double Tempo, Vm, Espaco, Lgastos;

    printf("Digite quanto tempo levou ate o fim da viagem: ");
    scanf("%lf", &Tempo);

    printf("Digite a velocidade media do veiculo: ");
    scanf("%lf", &Vm);

    Espaco = Tempo*Vm;

    Lgastos = Espaco/12;

    printf("A distancia percorrida pelo veiculo foi de %.2lf km e a quantidade de litros gastos e de %.2lf\n", Espaco, Lgastos);

    return 0;
}