#include <stdio.h>

int main()
{
      float raio, areaTotal;
    printf("Digiteo raio do circulo:");
    scanf("%f", &raio);
    areaTotal = 3.14 * (raio*raio);
    printf("Area do circulo é: %g",areaTotal);
}
