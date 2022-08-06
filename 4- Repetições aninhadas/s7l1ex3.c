#include <stdio.h> 

int main()

{
    int n, i, i2; 

    printf("Digite o valor de n: "); 
    scanf("%d", &n); 

    for(i = n*(-1); i<= n; i++)
    {
        printf("\n%d ", i); 
        for(i2 = 1; i2<= i*i + i + 1; i2++)
        {
            printf("."); 
        }
        printf("*"); 
    }
    return 0; 
}