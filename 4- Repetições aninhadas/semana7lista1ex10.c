#include <stdio.h>

int main()
{
int div, n=1, i=1, cont=1;

while(i< 20 || cont!= 20)
{
    div = n%i;
    if(div==0)
    {
        cont++;
    }
    else
    {
        n++;
        i = 1;
        cont = 1;
    }
    i++;
}
printf("O menor divisivel por cada numero de 1 a 20 eh %d", n);
return 0;
}
