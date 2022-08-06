#include <stdio.h> 

int main() 

{
    int i, n, fatorial = 1; 

    printf("Digite um numero: "); 
    scanf("%d", &n); 

    for(i=1; i<= n; i++)
    {
        fatorial = fatorial*i; 
    }

    printf("O fatorial de %d eh %d", n, fatorial); 

    return 0;
}