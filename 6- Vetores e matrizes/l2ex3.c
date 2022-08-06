#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define d 10

void imprimematriz(int m[10][10])
{
    int i, j; 
    for(i=0; i < d; i++)
    {
        for(j=0; j < d; j++)
        {
            printf("%2d ", m[i][j]); 
        }
        printf("\n"); 
    }
}

void preenchematriz(int m[10][10], int dim)
{
    int i, j, im, jm, maior = 0, jm2, menor = 100; 

    for(i=0; i<dim;i++)
    {
        for(j=0; j<dim; j++)
        {
            m[i][j] = rand()%100;
            if(m[i][j]>maior)
            {
                maior = m[i][j]; 
                im = i; 
                jm = j; 
            }
        }     
    }

    for(j=0; j<dim;j++)
    {
        if(m[im][j] < menor)
        {
            menor = m[im][j]; 
            jm2 = j; 
        }
    }
    printf("Linha %d Coluna do minimo: %d Coluna do maximo: %d\n", im, jm2, jm); 
    imprimematriz(m); 
}

int main() 
{
    int m[10][10]; 

    srand(time(NULL)); 

    preenchematriz(m, d); 

    return 0; 
}