#include <stdio.h> 
#define N 3 

void preenchematriz(int m[N][N])
{
    int i, j; 
    for(i=0; i < N; i++)
    {
        printf("Insira a linha %d: ", i); 
        for(j=0; j<N; j++)
            scanf("%d", &m[i][j]); 
    }
}

void verificar(int m[N][N])
{
    int i, j, sl[N], sc[N]; 
    for(i=0; i<N; i++)
    {
        sl[i] = 0;
        sc[i] = 0; 
    }
    for(i=0; i < N; i++)
    { 
        for(j=0; j<N; j++)
        {
            sl[i] = sl[i] + m[i][j];
            sc[j] = sc[j] + m[i][j];
        }       
    }
    for(i=0; i<N; i++)
    {
        if(sl[i] != 1 || sc[i] != 1)
        {
            printf("Nao eh de permutacao.");
            break; 
        }
        else if(i==N-1)
            printf("Eh de permutacao."); 
    }
}

int main() 
{
    int m[N][N]; 

    preenchematriz(m); 
    verificar(m); 

    return 0; 
}