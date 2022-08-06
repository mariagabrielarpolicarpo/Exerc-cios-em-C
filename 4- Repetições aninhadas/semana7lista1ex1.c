#include <stdio.h>

int main()
{
int n, m, i, j;

printf("Digite o valor de n: ");
scanf("%d", &n);

printf("Digite o valor de m: ");
scanf("%d", &m);

for (i = 1; i<= n ; i++)
{
    for (j= 1; j<=m; j++)
    {
    printf("%d     ", i*j);
    }
printf("\n");
}

return 0;
}
