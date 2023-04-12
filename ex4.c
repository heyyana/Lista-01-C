#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numInteiro, raizQuadrada, numElevadoQ; 
    printf("Digite um número inteiro:");
    scanf("%d", &numInteiro);
    raizQuadrada = sqrt(numInteiro); 
    numElevadoQ = pow(numInteiro,4);
    printf("A raiz quadradada do número é:%d", raizQuadrada);
    printf("\nO número elevado é:%d", numElevadoQ); 
}
