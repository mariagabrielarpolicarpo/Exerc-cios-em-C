#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

void alocaVetor(int **v, int tam, int lim)
{ 
    int i; 
    *v = (int*)malloc(tam*sizeof(int));  
    for(i=0; i < tam; i++)
        (*v)[i] = rand()%(2*lim+1)-lim;
}

void imprime(int v[], int tam)
{
    int i; 
    printf("Vetor: "); 
    for(i=0; i < tam; i++)
        printf("%d ", v[i]); 
    printf("\n"); 
}

int * expandeVetor(int *v, int tam, int n, int lim)
{
    int i;
    v = (int*)realloc(v, (n+tam)*sizeof(int)); 
    for(i= tam; i < n+tam; i++)
        v[i] = rand()%(lim+1);
    if(v==NULL)
    {
        printf("Erro de alocacao."); 
        exit(1); 
    }
    return v; 
}

int main() 
{
    int *r; 
    srand(time(NULL)); 
    alocaVetor(&r, 10,20);
    imprime(r,10);  
    r = expandeVetor(r, 10, 5, 20);
    imprime(r, 15); 

    free(r); 

    return 0; 
}