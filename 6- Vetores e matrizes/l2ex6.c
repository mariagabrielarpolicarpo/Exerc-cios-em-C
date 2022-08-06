#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int confere(int n, int m[5][5], int i2, int j2)
{
    int i, j; 
    for(i= 0; i <= i2; i++)
    {
        for(j=0; j < 5; j++)
        {
            if(i==i2 && j == j2)
                break; 
            if(n==m[i][j])
                return 1; 
        }
    }
    return 0; 
}

void bingo(int m[5][5])
{
    int i, j, r; 

    srand(time(NULL)); 

    for(i=0; i< 5; i++)
    {
        for(j=0; j< 5; j++)
        {
            m[i][j] = rand() % 100; 
            r = confere(m[i][j], m, i, j);
            while(r==1)
            {
                m[i][j] = rand() % 100;
                r = confere(m[i][j], m, i, j);
            }  
        }
    }
}

void imprime(int m[5][5])
{
    int i, j; 

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%2d ", m[i][j]); 
        }
        printf("\n"); 
    }
}

int main() 
{
    int m[5][5]; 

    srand(time(NULL)); 

    bingo(m); 
    imprime(m); 

    return 0; 
}