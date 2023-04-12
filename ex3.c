#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    div_t output;
    float n1;
    
    printf("Digite um numero:");
    scanf("%f", &n1);
    
    output = div(n1, 1);
   
    printf("A parte inteirado numero é: %d", output.quot);
    printf("\n A parte fracionada numero é: %g", n1 - output.quot);
    printf("\n A parte arredondado numero é: %g", round(n1));
}
