#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() 

{
    int numeroaleatorio, numerodigitado, numtentativas = 0; 
    srand(time(NULL)); 

    numeroaleatorio = rand() % 500 + 1; 

    printf("Digite um numero entre 1 e 500: "); 
    scanf("%d", &numerodigitado); 

    while (numerodigitado!= numeroaleatorio)
    {
        if(numerodigitado>numeroaleatorio)
        {
            printf("Esse numero eh maior que o aleatorio.");
        }
        else
        {
            printf("Esse numero eh menor que o aleatorio.");
        }
        numtentativas = numtentativas + 1; 
        printf("Você errou! Digite outro numero: "); 
        scanf("%d", &numerodigitado); 

    }
    if(numtentativas<= 4)
    {
        printf("/o/");
    }
    else if(numtentativas<= 10)
    {
        printf(":-D"); 
    }
    else
    {
        printf(":-/"); 
    }
    return 0; 
}