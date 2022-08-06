#include <stdio.h> 

int ehregular(int n)
{
    while(n>1)
    {
        if(n%2==0)
            n = n/2; 
        else if(n%3==0)
            n = n/3; 
        else if(n%5==0)
            n = n/5; 
        else 
            return 0; 
    }
    return 1; 
}

int main() 
{
    int n, r; 
    printf("Digite um numero: "); 
    scanf("%d", &n); 

    r = ehregular(n); 
    printf("Retorno %d", r); 

    return 0; 
}