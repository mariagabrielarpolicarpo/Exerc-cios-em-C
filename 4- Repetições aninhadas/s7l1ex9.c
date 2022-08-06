#include <stdio.h> 

int main()

{
    int t, i, numero, soma = 0, i2, naoehprimo = 0; 

    printf("Digite o valor de t inteiro positivo: ");
    scanf("%d", &t); 


    for(i = 0; i < t; i++)
    { 
        printf("Digite um numero: "); 
        scanf("%d", &numero); 

        for(i2 = 2; i2 <= numero; i2++)
        {
            if(numero%i2 == 0)
                naoehprimo += 1;  
        }
        if(naoehprimo == 1)
        {
            soma = soma + numero; 
            naoehprimo = 0; 
        }
        i2 = 2; 

    } 
    printf("A soma dos numeros primos eh %d", soma); 


    return 0; 
}