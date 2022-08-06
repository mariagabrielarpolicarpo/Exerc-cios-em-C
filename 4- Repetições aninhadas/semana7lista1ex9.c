#include <stdio.h>

int main()
{

int div= 2, t, i=1, eh_par, soma = 0, n;

printf("Quantos numeros voce vai digitar?: ");
scanf("%d", &t);

while(i<=t)
{
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n<=0) //para caso o usuario digite 0 ou numero negativo
    {
        printf("Numero invalido. Digite um numero: ");
        scanf("%d", &n);
    }
    while(div<n)
    {
        eh_par = n%div;
        if(eh_par==0)
        {
            break;
        }
        div++;
    }
    if(div==n)
    {
        soma = soma + n;
    }
    i++;
}
printf("A soma dos numeros primos eh %d", soma);
return 0;
}
