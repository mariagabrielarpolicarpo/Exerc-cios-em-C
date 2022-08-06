#include <stdio.h>

int main()

{ // o codigo nao mostra o resultado desejado, sei que eu deveria implementar alguma coisa ou retirar outra do lugar, mas agora nao estou com tempo de
    // analisar e prefiro refazer a questao depois
int i = 1, i2 = 0, m, soma = 1, x = 0, i3=0;
printf("Entre com o valor de m: ");
scanf("%d", &m);

while(i<=m)
{
x = 2*(i-1) + x;
    while(i2<i)
    {
        if(i*i*i== soma*i - x)
        {
            while(i3<i)
            {
                if(i3==0)
                {
                    printf("\n%d ao cubo: ", i);
                }
                printf("  %d", soma - x);
                soma = soma + 2;
                i3++;
            }
            i2++;
        }
        else
        {
            soma = soma + 2;
        }
    }
printf("\n\ni: %d , i2: %d, soma: %d , x: %d", i, i2, soma,x);
i2 = 0;
i3 = 0;
i++;
}
return 0;
}
