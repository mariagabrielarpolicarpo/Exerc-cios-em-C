#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define C 5

int main() 
{
    int v[C], i, aux, n; 

    srand(time(NULL)); 

    for(i=0; i<C;i++)
    {
        v[i] = rand() % 10; 
        printf("%d ", v[i]); 
    }

    printf("O elemento de qual posicao que voce deseja remover?: "); 
    scanf("%d", &n); 

    for(i=n; i< C; i++)
    { 
        v[i] = v[i+1]; 
    }
    for(i=0; i<C-1; i++)
        printf("%d ", v[i]); 

    return 0; 
}