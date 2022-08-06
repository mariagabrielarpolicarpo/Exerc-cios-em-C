#include <stdio.h> 

void determinaValores(int n)
{
    int a, b, c; 

    for(a=1; a<=n-2; a++)
    {
        for(b=1; b<= n-2; b++)
        {
            for(c= n-2; c>=1; c--)
            {
                if(a+b+c== n)
                    printf("%d + %d + %d\n", a, b, c); 
            }
        }
    }
}

int main() 
{
    int n; 

    printf("Digite um numero: ");
    scanf("%d", &n); 

    determinaValores(n); 

    return 0; 
}