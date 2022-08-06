#include <stdio.h>

int main()
{
int i, n=0, funcao = 0, i2 = 1;
while (n<= 0)
{
    printf("Forneca o valor de n: ");
    scanf("%d", &n);
}
i = -n;
while(i<= n)
{
    printf("\n%d", i);
    funcao = i*i + i + 1;
    while(i2!= funcao)
    {
        printf(".");
        i2++;
    }
    printf("*");
    funcao = 0;
    i2 = 0;
    i++;
}
return 0;
}
