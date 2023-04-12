#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorDeposito , valorTaxaJuros;
    printf("Digite o valor do deposito:");
    scanf("%f", &valorDeposito);
    printf("Digite a taxa de juros:");
    scanf("%f", &valorTaxaJuros);
    
    float totalRendido = 0.0, rendimento = 0.0;
    rendimento = valorDeposito * (valorTaxaJuros / 100);
    totalRendido = valorDeposito + rendimento;
    
    printf("O valor do rendimento e:%f", rendimento);
    printf("O total rendido e:%f", totalRendido);
}
