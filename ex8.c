#include <stdio.h>

int main()
{
    float baseMaior, baseMenor, altura;
    printf("Digite o valor da base menor:");
    scanf("%f", &baseMenor);
    printf("Digite a valor da base maior:");
    scanf("%f", &baseMaior);
    printf("Digite a altura:");
    scanf("%f", &altura);
    printf("Area do trapézio é: %g",((baseMaior+baseMenor)*altura)/2);
}
