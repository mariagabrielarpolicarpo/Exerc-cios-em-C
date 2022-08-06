#include <stdio.h> 
int ultdig(int n1, int n2)
{
    while(n2>0)
    {
        if(n1%10!= n2%10)
            return 0;
        n1 = n1/10; 
        n2 = n2/10; 
    }
    return 1; 
}
int main() 
{
    int n1, n2, r; 
    printf("Digite dois numeros: "); 
    scanf("%d %d", &n1, &n2); 

    r = ultdig(n1,n2); 
    printf("Retorno %d", r); 

    return 0; 
}