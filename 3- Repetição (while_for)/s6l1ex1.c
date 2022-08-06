#include <stdio.h> 

int main()

{
    int n, i; 
    printf("Digite um numero para saber sua tabuada: ");
    scanf("%d", &n);

    for(i=0; i<=10; i++)
    {
        printf("\n%d x %d = %d", n, i, n*i); 
    }

    return 0; 
}