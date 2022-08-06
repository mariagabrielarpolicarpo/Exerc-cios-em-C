#include <stdio.h> 

int main()
{
    int maior, numerolido; 

    printf("Digite um numero: "); 
    scanf("%d", &numerolido);
    maior = numerolido; 

    while(numerolido>= 0)
    {
        printf("Digite um numero: "); 
        scanf("%d", &numerolido); 
        if(numerolido>maior)
            maior = numerolido; 
    }
printf("O maior numero digitado foi %d", maior); 

    return 0;
}