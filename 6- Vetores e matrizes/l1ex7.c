#include <stdio.h> 
#define N 10

void preencheVetor(int v[], int n)
{
    int i; 
    for(i=0; i<n; i++)
    {
        printf("Digite o elemento %d do vetor: ", i); 
        scanf("%d", &v[i]); 
    }
}
void imprime(int v[], int n)
{
    int i; 
    for(i=0; i < n; i++)
        printf("%d ", v[i]); 
}

float media(int v[], int n, int *maior, int *menor)
{
    int i, soma = 0, cont = 0; 
    float media = 0.0; 
    *maior = v[0]; *menor = v[0]; 
    for(i=0; i<n; i++)
    {
        if(v[i]> *maior)
            *maior = v[i]; 
        if(v[i]< *menor)
            *menor = v[i]; 
        if(i%2==0)
        {
            soma = soma + v[i]; 
            cont = cont+1; 
        }
    }
    return soma/(float)cont; 
}

int main() 
{
    int v[N], maior, menor; 

    preencheVetor(v, N); 
    imprime(v, N); 
    printf("A media eh %f", media(v, N, &maior, &menor)); 
    printf("Maior elemento %d menor elemento %d", maior, menor); 

    return 0; 
}