#include <stdio.h> 

int exbissexto(int ano)
{
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
        return 1; 
    return 0; 
}

int main() 
{
    int n, v; 
    printf("Digite um valor: "); 
    scanf("%d", &n); 

    v = exbissexto(n); 
    printf("Retorno %d", v); 

    return 0; 
}