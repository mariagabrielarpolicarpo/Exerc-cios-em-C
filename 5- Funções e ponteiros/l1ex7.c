#include <stdio.h> 
#include <math.h> 

int bin2dec(int num)
{
    int soma = 0, i = 0; 

    while(num!= 0)
    {
        if(num%10==1)
            soma = soma + pow(2,i);  
        num = num/10; 
        i = i + 1; 
    }
    return soma; 
}

int dec2bin(int num)
{
    int soma = 0; 
    while(num>=1)
    {
        if(num%2==1)
            soma = soma*10 + 1; 
        else 
            soma = soma*10; 
        num = num/2; 
    }
    return soma; 
}

int main() 
{
    int opcao, n, v; 

    printf("[1] Bin/Dec [2] Dec/Bin [0] Sair"); 
        scanf("%d", &opcao);

    while(opcao!=0)
    {
        printf("\nDigite um numero: "); 
        scanf("%d", &n); 

        if(opcao==1)
        {
          v = bin2dec(n); 
          printf("%d", v);   
        }
            
        else 
        {
            v = dec2bin(n); 
            while(v!= 0)
            {
                printf("%d", v%10); 
                v = v/10; 
            }
        }

        printf("\n[1] Bin/Dec [2] Dec/Bin [0] Sair"); 
        scanf("%d", &opcao);
    }

    return 0; 
}
