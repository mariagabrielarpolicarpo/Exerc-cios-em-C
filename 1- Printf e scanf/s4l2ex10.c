#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

int main()

{
    float raio;
    double volume; int inteiro; 

    printf("Digite o valor do raio: ");
    scanf("%f", &raio); 

    printf("Digite um numero qualquer negativo: "); 
    scanf("%d", &inteiro); 

    volume = (pow(raio,3)*3.14159*4)/(float)3; 
    printf("%.3f %d", volume, abs(inteiro)); 
    return 0;
}