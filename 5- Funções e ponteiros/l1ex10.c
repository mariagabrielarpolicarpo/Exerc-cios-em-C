#include <stdio.h> 

int retornaMDC(int num1, int num2)
{
    while(num1!= num2)
    {
        if(num1>num2)
            num1 = num1 - num2; 
        else 
            num2 = num2 - num1; 
    }
    return num1; 
}

int main() 
{
    int n1, n2, mdc; 

    printf("Digite dois numeros separados por espaco: "); 
    scanf("%d %d", &n1, &n2); 

    mdc = retornaMDC(n1,n2); 
    printf("O mdc eh %d", mdc); 

    return 0; 
}

