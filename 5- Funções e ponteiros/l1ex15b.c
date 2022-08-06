#include <stdio.h> 

int paridade(int k)
{
    int i, n, aux, cont = 1; 

    printf("Digite um numero: "); 
    scanf("%d", &n); 

    if(k==1)
        return n%2; 

    for(i = 1; i < k; i++)
    {
        aux = n; 
        printf("Digite um numero: "); 
        scanf("%d", &n); 
        if(n%2 == aux%2)
        {
            cont = cont + 1; 
            if(cont == k)
            {
                if(n%2== 0)
                {
                    return 0;
                }
                else 
                {
                    return 1;
                }
            }
        }
    }  
    return -1; 
}


int main() 
{
    int k, n, i = 2, i2 = 1, i3= 2, anterior, naoalterna = 0; 

    printf("Quantos numeros voce deseja escrever: "); 
    scanf("%d",&k); 

    while(i2<k)
    {
        i2 = i2+i3; 
        i3 = i3 + 1; 
        if(i2>k)
        {
            printf("Nao eh alternante."); 
            i = k; 
        }
        else 
            anterior = paridade(1);
    }

    

    while(i<=k)
    {
        paridade(i); 
        if(anterior == paridade(i))
        {
            naoalterna = 1; 
        }
        anterior = paridade(i); 
        i = i + 1;
    }
    if(naoalterna == 0)
    {
        printf("A sequencia eh %d - alternante", i3); 
    }

    return 0; 
}