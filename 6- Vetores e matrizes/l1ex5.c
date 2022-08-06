#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define N 10

void preencheVetor(int v[], int n, int min, int max)
{
    int i; 
    for(i=0; i<n; i++)
        v[i] = (rand()%(max-min+1)) + min; 
}
void imprime(int v[], int n)
{
    int i; 
    for(i=0; i < n; i++)
        printf("%d ", v[i]); 
}

int main() 
{
    int v[N]; 

    srand(time(NULL));

    preencheVetor(v, N, 10,20); 
    imprime(v, N); 

    return 0; 
}