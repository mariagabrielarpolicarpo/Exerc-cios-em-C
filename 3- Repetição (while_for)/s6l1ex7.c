#include <stdio.h>

int main()

{
    int i, n, aux = 1, soma = 1, aux2 = 1; 

    printf("Quantos numeros da serie de fibonacci voce quer ver?: "); 
    scanf("%d", &n); 

    if(n==1)
    {
        printf("0"); 
    }
    else if(n==2)
    {
        printf("O 1");
    }
    else
    {
        printf("0\n1");
        for(i = 0; i< n - 2; i++)
        {  
            printf("\n%d", soma);
            aux = soma; 
            soma = soma + aux2;
            i++; 
            if(i==n-2)
                {
                    break; 
                }
            printf("\n%d", soma);
            aux2 = soma; 
            soma = soma + aux; 
        }
    }


    return 0; 
}