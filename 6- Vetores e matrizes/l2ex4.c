#include <stdio.h> 
#define N 3

void quadrado(int m[N][N])
{
    int i, j, s = 0, s1 = 0, s2 = 0, s3 = 0; 
    for(i=0; i < N; i++)
    {
        s1 = s; 
        s = 0; 
        for(j=0; j<N; j++)
        {
            s = s + m[i][j]; 
            if(i==j)
                s2 = s2+ m[i][j];
            if(i+j==N-1)
                s3 = s3 + m[i][j];  
        }
        if(s!=s1 && i > 0)
        {
            printf("Nao eh quadrada."); 
            break; 
        }
    }
    if(s==s1 && s1 == s2 && s2 == s3)
        printf("Eh quadrada."); 
}

void preenchematriz(int m[N][N])
{
    int i, j; 
    for(i=0; i < N; i++)
    {
        printf("Insira a linha %d: ", i); 
        for(j=0; j<N; j++)
        {
            scanf("%d", &m[i][j]); 
        }
    }
}

int main() 
{
    int m[N][N]; 

    preenchematriz(m); 
    quadrado(m);

    return 0;
}