#include <stdio.h>

int main()

{
int n, n1, n2, ehcrescente =1, i=1, num_repetido = 1, ehdecrescente = 1;

printf("Quantos numeros existem na sequencia? ");
scanf("%d", &n);

printf("Digite um numero: ");
scanf("%d", &n1);

while (i<n)
{
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if(n1<=n2)
    {
        ehcrescente++; // criei a variavel ehcrescente para indicar se a sequencia esta crescendo ou nao
        if(n1==n2)
        {
            num_repetido++; // a variavel num_repetido serve para casos em q o usuario digite somente numeros repetidos, nesse caso a sequencia nao cresce
        }
    }
    else
    {
        ehdecrescente++;
    }
    n1 = n2;
    i++;
}
if(num_repetido== n)
{
    printf("Nao cresce");
}
else if(ehcrescente ==n)
    {
        printf("a) Ordenada de forma crescente");
    }
else if(ehdecrescente == n)
{
    printf("b) Ordenada de forma decrescente");
}
else
{
    printf("c) Desordenada");
}
return 0;
}
