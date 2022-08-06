#include <stdio.h> 

int main()

{
    int i, i2, n,m; 

    printf("Entre com o valor de n: "); 
    scanf("%d", &n); 

    printf("Entre com o valor de m: "); 
    scanf("%d", &m);

    for(i= 1; i<=n; i++)
    {
        for(i2 = 1; i2<=m; i2++)
        {
            printf("%d ", i2*i); 
        }
        printf("\n"); 
        i2 = 0; 
    }

    return 0;
}