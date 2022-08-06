#include <stdio.h> 

int main() 
{
    int v[5],i, i2; 

    for(i=0; i<5; i++)
    {
        printf("Digite um numero: "); 
        scanf("%d", &v[i]); 
        for(i2=0; i2<i; i2++)
        {
            while(v[i]==v[i2])
            {
                printf("Numero repetido. Digite outro."); 
                scanf("%d", &v[i]); 
                i2 = 0; 
            }
        }
    }

    return 0; 
}