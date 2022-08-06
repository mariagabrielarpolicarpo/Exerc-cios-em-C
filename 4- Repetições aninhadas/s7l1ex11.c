#include <stdio.h> 

int main() 

{
    int i,n, k, i2, resto = 0, cont = 0; 
    printf("Entre com o valor de n: "); 
    scanf("%d", &n); 

    printf("Entre com o valor de k: "); 
    scanf("%d", &k); 

    for(i = 0; i<n; i++)
    {
        for(i2 = 2; i2< k + 1; i2++)
        {
            resto = (k+1)%i2; 
            if(resto == 0)
            {
                cont = cont + 1; 
            }
        }
        if(cont == 0)
        {
            printf("%d ", i2); 
        }
        else 
            i = i - 1; 
        k = k + 1; 
        cont = 0; 
        i2 = 2; 
    }


    return 0;
}