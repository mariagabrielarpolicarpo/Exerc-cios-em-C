#include <stdio.h> 

int main()

{
    float x,y; 

    printf("Entre com o valor de x: "); 
    scanf("%f", &x); 

    printf("Entre com o valor de y: "); 
    scanf("%f", &y); 

    if(x>0 && y!= 0)
    {
        if(y>0)
            printf("Primeiro quadrante.");
        else
            printf("Quarto quadrante.");
    }
    else if(x<0 && y!= 0)
    {
        if(y<0)
            printf("Terceiro quadrante."); 
        else
            printf("Segundo quadranet."); 
    }
    else 
    {
        if(x== 0 && y==0)
        printf("Eh a origem."); 
    else if(x==0 && y!= 0)
        printf("Eixo y."); 
    else if(x!=0 && y==0)
        printf("Eixo x."); 
    }
    return 0;
}