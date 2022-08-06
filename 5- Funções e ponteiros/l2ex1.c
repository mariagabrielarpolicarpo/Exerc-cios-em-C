#include <stdio.h> 

void questao01(int *a, int *b)
{
    *a = *a+1; 
    *b = *b+1; 
}

int main() 
{
    int a, b; 

    printf("Digite dois numeros separados por espaco: ");
    scanf("%d %d", &a, &b); 

    questao01(&a,&b); 
    printf("A: %d B: %d", a, b); 

    return 0; 
}