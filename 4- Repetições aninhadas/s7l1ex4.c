#include <stdio.h> 

int main()

{
    int n, i, i2; 

    printf("Entre com o valor de n: "); 
    scanf("%d", &n); 

    for(i = 1; i<= n; i++)
    {
        printf("\n %d ", i); 
        for(i2 = i; i2<=i*i; i2 = i2 + i)
        {
            printf("%d ", i2); 
        }
        i2 = 0; 
    }

    return 0; 
}