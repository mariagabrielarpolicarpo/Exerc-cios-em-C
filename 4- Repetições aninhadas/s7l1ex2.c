#include <stdio.h> 

int main()

{
    int m, i, i2, soma = 1; 

    printf("Digite o valor de m: "); 
    scanf("%d", &m); 

    for(i=1; i<=m; i++)
    {
        for(i2 = 0; i2 < i; i2++) 
        {
            if(i2 == i - 1)
            {
                printf("%d", soma); 
            }
            else 
            {
                printf("%d + ", soma); 
            }
            soma = soma + 2; 
        }
        printf("\n"); 
        soma = soma - 2*i2 + i*2; 
        i2 = 0; 
    }

    return 0;
}