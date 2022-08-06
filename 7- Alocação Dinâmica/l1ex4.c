#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int** alocamatriz(int dim)
{
    int i; int **m; 

    m = (int**)malloc(dim*sizeof(int*));

    for(i=0; i < dim; i++)
        m[i]= (int*)malloc(dim*sizeof(int)); 

    if(m==NULL)
    {
        printf("Erro de alocacao."); 
        exit(1); 
    }
    return m; 
}

void preenchematriz(int **m, int dim)
{
    int i, j; 

    for(i=0; i<dim; i++)
    {
        for(j=0; j<dim; j++)
        {
            m[i][j] = rand()%100; 
        }   
    }
}

void alocavetor(int **v, int iti, int dim)
{
    int i; 
    *v = (int*)malloc(iti*sizeof(int)); 
    for(i=0; i < iti; i++)
        (*v)[i] = rand()%dim;
}

void imprimev(int v[], int tam)
{
    int i; 
    printf("Vetor: "); 
    for(i=0; i < tam; i++)
        printf("%d ", v[i]); 
    printf("\n"); 
}

void imprimematriz(int **m, int dim)
{
    int i, j; 
    printf("Matriz: \n"); 
    for(i=0; i < dim; i++)
    {
        for(j=0; j < dim; j++)
            printf("%d ", m[i][j]); 
        printf("\n"); 
    }
}

int custo_cidades (int* v, int n_cidades, int** m)
{
    int i, j, custo = 0; 

    for(i=0; i < n_cidades - 1; i++)
    {
        custo = m[v[i]][v[i+1]] + custo;  
    }
    return custo; 
}

int main()
{
    int **m, dim, iti, *v, custo, i; 

    srand(time(NULL)); 

    printf("Qual a dimensao da matriz?: "); 
    scanf("%d", &dim); 

    printf("Qual o tamanho do itinerario?: "); 
    scanf("%d", &iti); 

    m = alocamatriz(dim); preenchematriz(m, dim); imprimematriz(m, dim);
    alocavetor(&v,iti, dim); imprimev(v, iti); 

    custo = custo_cidades(v, iti, m); 
    printf("O custo eh de %d", custo); 

    for(i = 0; i < dim; i++)
        free(m[i]); 

    free(m); 

    return 0; 
}