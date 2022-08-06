#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define N 10

void preencheVetor(int v[], int n, int lim)
{
    int i; 
    for(i=0; i<n; i++)
        v[i] = rand() % lim; 
}
void imprime(int v[], int n)
{
    int i; 
    for(i=0; i < n; i++)
        printf("%d ", v[i]); 
}

int main() 
{
    int lim = 20; int v[N]; 

    srand(time(NULL));

    preencheVetor(v, N, lim); 
    imprime(v, N); 

    return 0; 
}