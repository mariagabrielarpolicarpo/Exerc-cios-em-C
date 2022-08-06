#include <stdio.h>

int main()

{
int n, i,j;
n = 0;

while(n<= 0)
{
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("O valor tem que ser maior que zero.");
    }
}
for(i=1; i<= n; i++)
{
    printf("%d ", i);
    for(j=1; j<= i; j++)
    {
        printf("%d ", i*j);
    }
    printf("\n");
}


return 0;
}
