#include <stdio.h> 

int calculaDigitoVerificador(int num)
{
    int i, soma = 0;

    for(i=3; i>=1; i--)
    {
        soma = num%10*i + soma; 
        num = num/10; 
    } 
    return (soma%11)%10; 

}

int main() 
{
    int i, v; 

    printf("Digite um numero de tres digitos: "); 
    scanf("%d", &i); 

    v = calculaDigitoVerificador(i); 
    printf("Retorno %d", v); 

    return 0; 
}