#include <stdio.h> 

int main()

{
    int numero, dias, horas, minutos, segundos; 

    printf("Digite o numero de segundos: "); 
    scanf("%d", &numero); 

    dias = numero/86400; 
    horas = (numero - dias*86400)/3600;
    minutos = (numero - dias*86400 - horas*3600)/60; 
    segundos =  numero - dias*86400 - horas*3600 - minutos*60; 

    printf("O numero %d tem %d dias %d horas %d minutos e %d segundos", numero, dias, horas, minutos, segundos); 

    return 0;
}