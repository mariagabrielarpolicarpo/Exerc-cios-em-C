#include <stdio.h> 

int main() 

{
    int n, i, i2, mult = 1, cont = 0; 

    printf("Digite um numero: "); 
    scanf("%d", &n); 

    for(i = 1; i<= n/2; i++)
    {
        for(i2 = i; i2 < i + 3; i2++)
        {
            mult = mult*i2; 
            
        }
        if(mult == n)
            {
                printf("Eh triangular."); 
                cont = 1; 
                break; 
            }
        mult = 1; 
    }
    if(cont == 0)
    {
        printf("Nao eh triangular."); 
    }
    return 0; 
}