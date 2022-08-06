#include <stdio.h> 

int retornaResto(int alexandre, int maria, int rafael)
{
    return(alexandre+maria+rafael)%3; 
}

void imprimeVencedor(int resto)
{
    if(resto==0)
        printf("Alexandre foi o vencedor."); 
    else if(resto==1)
        printf("Maria foi a vencedora."); 
    else 
        printf("Rafael foi o vencedor."); 
}

int main() 
{
    int n1, n2, n3, resto; 

    printf("Alexandre Maria Rafael digitem seus valores respectivamente separados por espaco: "); 
    scanf("%d %d %d", &n1, &n2,&n3); 

    resto = retornaResto(n1,n2,n3); 

    imprimeVencedor(resto); 

    return 0; 
}