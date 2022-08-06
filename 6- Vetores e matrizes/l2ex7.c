#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define N 10

void imprime(int m[N][N])
{
    int i, j; 

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%2d ", m[i][j]); 
        }
        printf("\n"); 
    }
}

void criar(int m[N][N])
{
    int i, j; 

    for(i=0; i< N; i++)
    {
        for(j=0; j< N; j++)
            m[i][j] = rand() % 100; 
    }
}

void somar(int m1[N][N], int m2[N][N])
{
    int i, j; 

    for(i=0; i < N; i++)
    {
        for(j=0; j < N; j++)
            printf("%d ", m1[i][j] + m2[i][j]);
            printf("\n");  
    }
}

void subtrair(int m1[N][N], int m2[N][N])
{
    int i, j; 

    for(i=0; i < N; i++)
    {
        for(j=0; j < N; j++)
            printf("%d ", m1[i][j] - m2[i][j]);
            printf("\n");  
    }
}

void multiplicar(int m1[N][N], int k)
{
    int i, j; 

    for(i=0; i < N; i++)
    {
        for(j=0; j < N; j++)
            printf("%d ", m1[i][j]*k);
            printf("\n");  
    }
}

int main() 
{
    int m1[N][N], m2[N][N], op, k, verif = 0; 

    printf("[0] Criar\n[1] Imprimir\n[2] Somar\n[3] Subtrair\n[4] Multiplicar por constante\n[5] Sair\nEscolha:");
    scanf("%d", &op); 

    while(op!=5)
    {
        if(verif==0)
        {
            printf("Matriz nao criada. Criando agora.\n"); 
            criar(m1); criar(m2);
        }
        if(op==0)
        {
            verif = 1; 
            criar(m1); criar(m2); 
        }
        else if(op==1)
        {
            printf("Matriz 1:\n"); imprime(m1); printf("Matriz 2:\n"); imprime(m2); 
        }
        else if(op==2)
            somar(m1, m2); 
        else if(op==3)
            subtrair(m1,m2);
        else if(op==4)
        {
            printf("Qual a constante?: ");
            scanf("%d", &k); 
            multiplicar(m1, k); 
        }
        else 
            printf("Opcao invalida."); 
        printf("[0] Criar\n[1] Imprimir\n[2] Somar\n[3] Subtrair\n[4] Multiplicar por constante \n[5] Sair\nEscolha:");
        scanf("%d", &op);    
    }

    return 0; 
}