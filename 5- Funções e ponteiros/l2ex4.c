#include <stdio.h> 

int divide(int *m, int *n, int d)
{
    if(*m%d==0 && *n%d==0)
    {
        *m = *m/d; 
        *n = *n/d; 
    }
    else if(*m%d==0)
        *m = *m/d; 
    else if(*n%d==0)
        *n = *n/d; 
    else 
        return 0; 
    return 1; 
}

int mmc(int m, int n)
{
    int d = 2, r, mmc = 1; 

    while(m!= 1 || n!= 1)
    {
        r = divide(&m,&n, d);
        if(r==1)
            mmc = mmc*d; 
        else 
            d = d + 1; 
    }
    return mmc; 
}

int main() 
{
    int m, n, r, t, i; 

    printf("Quantos numeros voce deseja calcular o mmc?: "); 
    scanf("%d", &t); 

    printf("Digite o primeiro valor: "); 
    scanf("%d", &m); 

    for(i=1; i<t; i++)
    {
        printf("Digite um valor: "); 
        scanf("%d", &n); 
        m = mmc(m,n); 
    }

    printf("O retorno eh %d", m); 

    return 0; 
}
