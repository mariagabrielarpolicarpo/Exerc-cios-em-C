#include <stdio.h>

int main()
{
int i = 0, k = 0, n= 0, i2 =2, div, aux;

while(n<= 0 || k<=0)
{
    printf("\nEntre com o valor de n e k respectivamente, separado por espaco: ");
    scanf("%d %d", &n,&k);
}
aux = k+1;
while(i<n)
{
        while(i2<=aux)
    {
        div = aux%i2;
        if(div== 0 && i2!= aux)
        {
            i--;
            div = 1;
            break;
        }

        else if(i2 == aux)
        {
            printf("\n%d", aux);
            break;
        }
        i2++;
    }
i2 = 2;
aux++;
i++;
}
return 0;
}
