#include <stdio.h> 

int main() 

{
    int n, numero, i, aux, cont = 0; 

    printf("Digite a quantidade de numeros: "); 
    scanf("%d", &n); 

    printf("Digite um numero: "); 
    scanf("%d", &numero);

    for(i = 1; i<n; i++)
    {
        aux = numero;
        printf("Digite um numero: ");
        scanf("%d", &numero); 

        if(aux != numero)
            cont = cont + 1; 
    }
    if(cont == 0)
        printf("Os numeros digitados sao iguais."); 
    else
        printf("Os numeros digitados nao sao iguais."); 
    return 0; 
}