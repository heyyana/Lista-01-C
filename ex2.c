#include <stdio.h>
#include <math.h>

int main()
{
    float numeroUm, numeroDois, numElevado;
    printf("Digiteo o primeiro numero:");
    scanf("%f", &numeroUm);
    printf("Digite o segundo numero:");
    scanf("%f", &numeroDois);
    
    numElevado = pow(numeroUm, numeroDois);
    printf("O numero elevado ao outro é: %g",numElevado);
}
