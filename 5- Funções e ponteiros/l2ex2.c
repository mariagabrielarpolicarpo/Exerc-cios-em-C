
#include <stdio.h> 
#include <math.h> 

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta; 

    delta = (b*b) -(4*a*c); 

    if(delta<0)
        return 0; 
    else 
    {
        *x1 = (-b + sqrt(delta))/(2*a);  
        *x2 = (-b - sqrt(delta))/(2*a);
        if(delta==0)
            return 1; 
    }
    return 2;    
}

int main() 
{
    int r; 
    float a,b,c,x1,x2; 

    printf("Digite o valor de a, b e c separados por espaco: "); 
    scanf("%f %f %f", &a,&b,&c);

    r = calcula_raizes(a,b,c,&x1,&x2); 

    if(r>0)
        printf("O valor de retorno eh %d e as raizes sao %.2f e %.2f", r, x1,x2); 
    else 
        printf("O retorno eh %d e nao ha raizes reais", r); 

    return 0; 
}