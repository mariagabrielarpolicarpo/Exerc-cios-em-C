#include <stdio.h>

int main()

{
int n, i= 1,cont=1,v, v1;

printf("Quantos numeros voce deseja avaliar?: ");
scanf("%d", &n);

if(n>=1)
{
    printf("Digite um numero: ");
    scanf("%d", &v);
}

while(i< n && n>1)
{
    printf("Digite um numero: ");
    scanf("%d", &v1);
    if(v1==v)
    {
        cont++;
    }
    i++;
}
if(cont==n)
{
    printf("Os valores digitados sao iguais.");
}
return 0;
}
