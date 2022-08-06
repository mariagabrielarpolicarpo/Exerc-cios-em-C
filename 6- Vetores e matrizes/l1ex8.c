#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void preencheVetor(int v[], int n, int min, int max)
{
    int i = 0; 
    while(i<n)
    {
        v[i] = rand()%max + min; 
        i++;
    }
}

float mediadospares(int v[], int n, int *maior, int *menor)
{
    int i = 0, soma = 0, cont = 0; float media = 0.0;  

    *menor = v[i]; 

    while(i<n)
    {
        if(i%2==0)
        {
            soma = soma + v[i]; 
            cont = cont + 1;
        }
        if(v[i]>*maior)
            *maior = v[i]; 
        if(v[i] < *menor)
            *menor = v[i]; 
        i++;
    }
    media = (float)soma/cont; 
    return media; 
}


int main() 
{
    int vetor[10]; int min = 20, max = 80, maior = 0, menor = 0; 

    srand(time(NULL));

    preencheVetor(vetor, 10, min, max); 

    mediadospares(vetor,10,&maior,&menor); 

    printf("A media eh %.2f. O maior numero eh %d e o menor numero eh %d", mediadospares(vetor, 10, &maior, &menor), maior, menor); 

    return 0; 
}