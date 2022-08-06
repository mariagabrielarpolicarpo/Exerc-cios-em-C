#include <stdio.h> 

int contadigitos(int n,int d)
{
    int contador = 0; 
    while(n>0)
    {
        if(n%10 == d)
        {
            contador = contador + 1; 
        }
        n = n/10; 
    }
    return contador; 
}

int main()
{
    int n1, n2, aux; 
    printf("Digite o valor de n1: "); 
    scanf("%d", &n1); 

    printf("\nDigite o valor de n2: "); 
    scanf("%d", &n2); 

    aux = n1;

    while(aux>0)
    {
        if(contadigitos(n1,aux) == contadigitos(n2,aux))
        {
            aux = aux/10; 
            if(aux>0 && aux<10 && contadigitos(n1,aux) == contadigitos(n2,aux))
            {
                printf("Eh permutacao.");
            }
        }
        else 
        {
            printf("Nao eh permutacao.");
            break;
        }
    }

    return 0; 
}