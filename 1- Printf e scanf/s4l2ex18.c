#include <stdio.h> 

int main()
{
    int pedagio, precopedagio; float distancia, gasto; 

    printf("Quantos pedagios tem? "); 
    scanf("%d", &pedagio); 

    printf("Qual a distancia entre as cidades?: "); 
    scanf("%f", &distancia); 

    precopedagio = 8*pedagio; 
    gasto = (2.6/(float)15)* distancia + precopedagio; 

    printf("O gasto eh de %.3f", gasto); 
}