#include <stdio.h> 

int retornaMaior(int n1, int n2)
{
    if(n1>n2)
        return n1; 
    return n2; 
}

int main() 
{
    int n1, n2, n3, v; 

    printf("Digite tres numeros separados por espaco: "); 
    scanf("%d %d %d", &n1, &n2, &n3); 

    v = retornaMaior(n1,n2); 

    if(v>n3)
        printf("%d eh o maior", v); 
    else
       printf("%d eh o maior", n3); 

    return 0; 
}