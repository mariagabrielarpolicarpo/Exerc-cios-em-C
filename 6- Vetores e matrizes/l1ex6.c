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
void direta(int v[], int n)
{
    int i; 
    printf("\nDireta: "); 
    for(i=0; i < n; i++)
        printf("%d ", v[i]); 
}

void inversa(int v[], int n)
{
    int i; 
    printf("\nInversa: "); 
    for(i=n-1; i >= 0; i--)
        printf("%d ", v[i]); 
}

int main() 
{
    int lim = 20; int v[N]; 

    srand(time(NULL));

    preencheVetor(v, N, lim); 
    direta(v, N); 
    inversa(v,N); 

    return 0; 
}

