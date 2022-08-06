#include <stdio.h> 
int contadigitos(int n, int d)
{
    int i = 0;
    while(n>0)
    {
        if(n%10==d)
            i = i + 1;
        n = n/10; 
    }
    return i; 
}

int ehPermutacao(int n1, int n2)
{
    int cont1, cont2, i; 
    for(i=0; i<10; i++)
    {
        cont1 = contadigitos(n1, i); 
        cont2 = contadigitos(n2, i); 
        if(cont1!=cont2)
            return 0; 
    }
    return 1; 
}

int main() 
{
    int n1, n2, r; 
    printf("Digite um numero e um digito: "); 
    scanf("%d %d", &n1, &n2); 

    r = ehPermutacao(n1, n2);
    printf("Retorno %d", r);

    return 0; 
}