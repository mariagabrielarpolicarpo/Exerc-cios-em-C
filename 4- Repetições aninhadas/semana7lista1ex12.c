#include <stdio.h>

int main()

{
int n1,n2, i=2, mult = 1;
// fiquei em duvida se deveria desconsiderar respostas negativas, como a questao nao especificou nada, deixei assim
printf("Digite um numero: ");
scanf("%d", &n1);

printf("Digite outro numero: ");
scanf("%d", &n2);

if(n1==0 || n2==0) // para caso o usuario digite zero
{
    if(n1>n2)
    {
        printf("O MMC eh %d", n1);
    }
    else
        printf("O MMC eh %d", n2);
}

else
{
    while(n1!= 1 || n2!= 1)
    {
        if(n1%i==0 && n2%i== 0)
        {
            printf("\n %d , %d | %d", n1,n2,i);
            n1 = n1/i;
            n2 = n2/i;
            mult = mult*i;
        }
        else if(n1%i==0)
        {
            printf("\n %d , %d | %d", n1,n2,i);
            n1 = n1/i;
            mult = mult*i;
        }
        else if(n2%i==0)
        {
            printf("\n %d , %d | %d", n1,n2,i);
            n2 = n2/i;
            mult = mult*i;
        }
        else
        {
            i++;
        }
    }
printf("\n 1 , 1 | %d", mult);
}

return 0;
}
