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
    printf("\n"); 
    for(i=0; i < n; i++)
        printf("%d ", v[i]); 
}

void intercalaVetores(int v1[], int v2[], int v3[], int n)
{
    int i, i2 = 0; 
    for(i=0; i< N; i++)
    {  
        v3[i2] = v1[i]; 
        v3[i2+1] = v2[i]; 
        i2 = i2 + 2; 
    }
}

int main() 
{
    int lim = 10; int v1[N], v2[N], v3[N+N]; 

    srand(time(NULL));

    preencheVetor(v1, N, lim); 
    imprime(v1, N); 
    preencheVetor(v2, N, lim); 
    imprime(v2,N); 
    intercalaVetores(v1,v2,v3, N); 
    imprime(v3, N+N); 

    return 0; 
}