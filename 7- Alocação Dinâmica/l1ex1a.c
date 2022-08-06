#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int * criaVetor(int tam, int lim)
{
    int *v, i; 
    v = (int*)malloc(tam*sizeof(int)); 
    for(i=0; i < tam; i++)
        v[i] = rand()%lim;
    return v; 
}

void imprime(int v[], int tam)
{
    int i; 
    for(i=0; i < tam; i++)
        printf("%d ", v[i]); 
}

int main() 
{
    int *r; 
    srand(time(NULL)); 
    r = criaVetor(10,20); 
    imprime(r, 10); 

    free(r); 

    return 0; 
}