#include <stdio.h> 
#include <math.h> 

int arredonda(float x)
{
    return lround(x); 
}

int main() 
{
    float n; int v;  
    printf("Digite um numero: "); 
    scanf("%f", &n); 

    v = arredonda(n);
    printf("Retorno %d", v); 

    return 0; 
}