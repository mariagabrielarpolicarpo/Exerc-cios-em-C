#include <stdio.h> 

int main()

{
    int n, i, numero, anterior, crescente = 0, decrescente = 0, comp; 

    printf("Digite o valor de n: "); 
    scanf("%d", &n); 

    comp = n - 1; 

    printf("Digite um numero: "); 
    scanf("%d", &numero);

    for(i = 1; i< n; i++)
    {
        anterior = numero; 
        printf("Digite um numero: "); 
        scanf("%d", &numero); 

        if(numero> anterior)
            crescente = crescente + 1; 
        else if(numero< anterior)
            decrescente = decrescente + 1; 
        else 
            comp = comp - 1;
    }
    printf("%d %d %d", comp, crescente, decrescente); 
    if(crescente == comp && crescente != 0)
        printf("Eh crescente."); 
    else if(decrescente == comp && decrescente != 0)
        printf("Eh decrescente."); 
    else if(comp== 0)
        printf("A sequencia nao cresce."); 
    else
        printf("Esta desordenada."); 

    return 0; 
}