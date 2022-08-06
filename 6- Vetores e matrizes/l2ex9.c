#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void preenchematriz(int matriz[][10], int nl); 
int compara(int gabarito[1][10], int matriz[5][10], int aluno);
void imprimematriz(int matriz[][10], int nl);  


int main() 
{
    int gabarito[1][10], matriz[5][10], nl, i, resultado = 0;

    srand(time(NULL)); 

    preenchematriz(gabarito, 1);  
    preenchematriz(matriz,10); 

    printf("gabarito: ");
    imprimematriz(gabarito, 1); 
    printf("matriz 5x10:\n");
    imprimematriz(matriz, 10); 

    for(i = 0; i < 5; i++)
    {
        resultado = compara(gabarito, matriz, i); 
        printf("O resultado do aluno %d eh %d\n", i, resultado); 
    }

    return 0; 
}

void imprimematriz(int matriz[][10], int nl)
{
    int i, i2; 

    for(i = 0; i < nl; i++)
    {
        for(i2 = 0; i2 < 10; i2++)
        {
            printf("%d ", matriz[i][i2]); 
        }
        printf("\n"); 
    }
}

int compara(int gabarito[1][10], int matriz[5][10], int aluno)
{
    int i, pont = 0; 

    for(i= 0; i<10; i++)
    {
        if(gabarito[1][i] == matriz[aluno][i])
        {
            pont = pont + 1; 
        }
    }

    return pont; 
}

void preenchematriz(int matriz[][10], int nl)
{
    int i, i2; 

    for(i = 0; i < nl; i++)
    {
        for(i2 = 0; i2 < 10; i2++)
        {
            matriz[i][i2] = 97 + (rand() % 4);
        }
    }
}