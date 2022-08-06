#include <stdio.h> 

int main() 

{
    int n, i, soma = 0;

    printf("Digite um numero: "); 
    scanf("%d", &n); 

    for(i=1; i<n; i++)
        {
            if(n%i==0)
                soma = soma + i; 
        }
    if(soma==n)
        printf("O numero eh perfeito.");
    else
        printf("Nao eh perfeito.");

    return 0; 
}