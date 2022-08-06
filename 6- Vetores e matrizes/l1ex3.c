#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define C 5 

void imprimir(int v[], int tam)
{
    int i; 

    for(i=0; i<tam; i++)
        printf("%d ", v[i]); 
        printf("\n"); 
}

int main() 
{
    int i, v1[C], v2[C], n = C - 1; 

    srand(time(NULL)); 

    for(i=0; i<C; i++)
    {
        v1[i] = rand() % 20; 
        v2[i] = rand() % 20; 
    }
    imprimir(v1, n+1); 
    imprimir(v2, n+1); 

    for(i=0; i < C; i++)
    {
        printf("%d ", v1[i] + v2[n]); 
        n = n - 1; 
    }

    return 0; 
}