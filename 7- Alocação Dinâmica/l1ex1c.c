#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void criaVetorPorReferencia(int **v, int tam, int lim)
{
    int i, *vi; 

    vi = (int*) malloc (tam*sizeof(int)); 

    for(i=0; i < tam; i++)
        vi[i] = rand() % (2*lim+1) - lim; 
    *v = vi;  

}

int main() 

{
    int* vetor, i, tam, lim; 

    srand(time(NULL)); 

    printf("Qual o valor de tam?: "); 
    scanf("%d", &tam); 

    printf("\nQual o valor de lim?: ");
    scanf("%d", &lim); 

   criaVetorPorReferencia(&vetor,tam,lim);

   for(i=0; i<tam; i++)
   {
       printf("%d ", vetor[i]); 
   }

    free(vetor);

    return 0; 
}