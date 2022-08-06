#include <stdio.h> 

int main()

{
    int numero = 0, cont = 0; float media = 0.0; 

    printf("Digite um numero: "); 
    scanf("%d", &numero); 

    while(numero!= -1000)
    {
        if(numero>0)
        {
            cont++; 
            media = media + numero; 
        }
    printf("Digite um numero: "); 
    scanf("%d", &numero);
    }
    printf("%d numeros positivos foram digitados.\nA media entre eles eh %f", cont, media/(float)cont);
    return 0; 
}