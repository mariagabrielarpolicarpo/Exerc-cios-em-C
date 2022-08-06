#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void alocaVetor(int **v, int tam)
{ 
    *v = (int*)malloc(tam*sizeof(int));  
    if(*v==NULL)
    {
        printf("Erro de alocacao."); 
        exit(1); 
    }
}

void preenche(int **v, int tam)
{
    int i; 
    for(i=0; i < tam; i++)
        (*v)[i] = rand()%11;
}

void imprime(int v[], int tam)
{
    int i; 
    printf("Vetor: "); 
    for(i=0; i < tam; i++)
        printf("%d ", v[i]); 
    printf("\n"); 
}

int criador(int v[], int **vet, int tam)
{
    int i, j, k = 0, cont; 

    for(i=0; i < tam; i++)
    {
        cont = 0; 
        for(j=0; j < i; j++)
        {
            if(v[i]!= v[j])
                cont++;   
        }
        if(cont==i)
        {
            (*vet)[k] = v[i];
            k = k + 1;
        }
    }
    *vet = (int*) realloc(*vet, (k+1)*sizeof(int));  
    if(*vet==NULL)
    {
        printf("Erro de alocacao."); 
        exit(1); 
    }
    return k; 
}

int main()
{
    int *v1, *v2, r; 

    srand(time(NULL));

    alocaVetor(&v1, 15); preenche(&v1, 15); imprime(v1, 15);  
    alocaVetor(&v2,15); 
    r = criador(v1, &v2, 15);
    imprime(v2, r); 

    return 0; 
}