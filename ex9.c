#include <stdio.h>
int main()
{
    float diagonalMaior, diagonalMenor;
    printf("Digite o valor da diagonal menor:");
    scanf("%f", &diagonalMenor);
    printf("Digite a valor da diagonal maior:");
    scanf("%f", &diagonalMaior);
    printf("Area do losangulo é: %g",
    diagonalMaior*diagonalMenor/2);   
}
