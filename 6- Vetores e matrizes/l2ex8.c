#include <stdio.h> 
#define M 3

void multiplica(int a[M][M], int b[M][M])
{
    int i, i2, i3, soma = 0; 

    for(i = 0; i<M; i++)
    {
        for(i2 = 0; i2< M; i2++)
        {
            for(i3=0; i3<M; i3++)
            {
               soma = (a[i][i3]*b[i3][i2]) + soma;  
            }
            printf("%d ", soma); 
            soma = 0; 
        }
        printf("\n"); 
    }

}

void potencia(int a[M][M])
{
    int i, i2, i3, i4, soma = 0; 

    for(i = 0; i<M; i++)
    {
        for(i2 = 0; i2< M; i2++)
        {
            for(i3=0; i3<M; i3++)
            {
               soma = (a[i][i3]*a[i3][i2]) + soma;
            }
            printf("%d ", soma); 
            soma = 0; 
        }
        printf("\n"); 
    }
}

void potenciaden(int a[M][M], int n)
{
    int i, i2, i3, i4, soma = 0; 

    for(i = 0; i<M; i++)
    {
        for(i2 = 0; i2< M; i2++)
        {
            for(i3=0; i3<M; i3++)
            {
               soma = (a[i][i3]*a[i3][i2]) + soma;  
               for(i4 = 0; i4<n-2; i4++)
               {
                   soma = soma*a[i3][i2]; 
               }
            }
            printf("%d ", soma); 
            soma = 0; 
        }
        printf("\n"); 
    }
}

int main() 

{
    int a[M][M], b[M][M], n,i, i2; 

    for(i= 0; i<M; i++)
    {
        for(i2= 0; i2<M; i2++)
        {
            printf("Digite %d%d de A: ", i, i2); 
            scanf("%d", &a[i][i2]);

            printf("Digite %d%d de B: ", i,i2);
            scanf("%d", &b[i][i2]); 
        }
    }

    printf("Informe o valor de n: "); 
    scanf("%d", &n);

    printf("\nMultiplicando\n");

    multiplica(a,b); 

    printf("\nPotencia de a ao quadrado\n");

    potencia(a); 

    printf("\nPotencia de n\n"); 

    potenciaden(a, n); 

    return 0; 
}

