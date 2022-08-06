#include <stdio.h> 

float calculaIMC(float altura, float peso)
{
    return peso/(altura*altura); 
}

void imprimeMsgIMC(float imc)
{
    if(imc<18.5)
        printf("Voce esta abaixo do peso."); 
    else if(imc<25)
        printf("Voce esta no peso normal."); 
    else if(imc<30)
        printf("Voce esta acima do peso."); 
    else
        printf("Voce esta obeso."); 
}

int main() 
{
    float p, a, imc; 
    printf("Digite seu peso e sua altura separados por espaco: "); 
    scanf("%f %f", &p, &a); 

    imc = calculaIMC(a, p); 
    printf("%f\n", imc);
    imprimeMsgIMC(imc); 

    return 0; 
}