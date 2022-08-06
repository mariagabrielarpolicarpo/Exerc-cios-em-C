#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define d 5

void preenchematriz(int m[5][5], int dim)
{
    int i, j; 

    for(i=0; i<dim;i++)
    {
        for(j=0; j<dim; j++)
            m[i][j] = rand()%10; 
    }
}

void imprimematriz(int m[5][5],int dim, int t)
{
    int i, j; 
    for(i=0; i<dim; i++)
    {
        for(j=0; j<dim; j++)
        {
            if(t==1)
                printf("%d ", m[j][i]); 
            else 
                printf("%d ", m[i][j]); 
        }
        printf("\n"); 
    }
}

int main() 
{
    int m[5][5]; 

    srand(time(NULL)); 

    preenchematriz(m, d); 
    imprimematriz(m,d, 0); 
    printf("\n"); 
    imprimematriz(m,d,1); 

    return 0; 
}