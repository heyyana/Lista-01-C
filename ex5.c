#include <stdio.h>

int main()
{
     float salario, salarioMinimo, qtdSalariosMinimo = 0.0; 
    printf("Digite o salario:");
    scanf("%f", &salario);
    printf("Digite o salario mínimo:");
    scanf("%f", &salarioMinimo);
    qtdSalariosMinimo = salario / salarioMinimo;
    printf("O valor do salario mínimo é:%g",qtdSalariosMinimo);
}
