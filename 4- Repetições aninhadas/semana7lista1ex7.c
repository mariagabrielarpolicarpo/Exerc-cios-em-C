#include <stdio.h>

int main()

{
int mult = 1, n = 0, i = 1;

while(n<= 0)
{
    printf("Qual numero voce quer verificar se eh triangular ou nao?: ");
    scanf("%d", &n);
}
while(i<=n)
{
    mult = i*(i+1)*(i+2);
    if(mult == n)
    {
        printf("Eh triangular.");
        break;
    }
    else if(mult!= n && i == n)
    {
        printf("Nao eh triangular.");
    }
    mult = 1;
    i++;
}
return 0;
}
