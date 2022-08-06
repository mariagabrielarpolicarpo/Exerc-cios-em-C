#include <stdio.h> 
#define N 7

void gerartriangulo(int m[N][N])
{
    int i, j; 

    m[0][0] = 1; 

    for(i=1; i< N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(j==0)
                m[i][j] = 1; 
            else if(i==j)
            {
                m[i][j] = 1; 
                j = N; //testar o continue 
            }
            else 
            {
                m[i][j] = m[i-1][j] + m[i-1][j-1]; 
            }
        }
    }
}

void imprime(int m[N][N])
{
    int i, j, k; 

    for(i=0; i<N; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d ", m[i][j]); 
        }
        printf("\n"); 
    }
}

int main() 
{
    int m[N][N]; 

    gerartriangulo(m); 
    imprime(m); 

    return 0; 
}