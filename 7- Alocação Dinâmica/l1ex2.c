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

void multiplica(int v1[], int v2[], int **v3, int t1, int t2)
{
    int i, j, k = 0; 

    for(i=0; i<t1; i++)
    {
        for(j=0; j< t2; j++)
        {
            (*v3)[k] = v1[i]*v2[j]; 
            k = k+1; 
        }
    }
}

void imprime(int v[], int tam)
{
    int i; 
    printf("Vetor: "); 
    for(i=0; i < tam; i++)
        printf("%d ", v[i]); 
    printf("\n"); 
}

int main() 
{
    int t1, t2, *v1, *v2, *v3; 

    srand(time(NULL));

    printf("Informe o tamanho dos dois vetores separados por espaco: "); 
    scanf("%d %d", &t1, &t2); 

    alocaVetor(&v1, t1); preenche(&v1,t1); imprime(v1,t1); 
    alocaVetor(&v2,t2); preenche(&v2,t2); imprime(v2,t2); 
    alocaVetor(&v3, t1*t2); multiplica(v1,v2, &v3, t1, t2); imprime(v3, t1*t2); 
    free(v1); free(v2); free(v3); 

    return 0; 
}