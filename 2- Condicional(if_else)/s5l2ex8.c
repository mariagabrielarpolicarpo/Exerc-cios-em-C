#include <stdio.h> 

int main()
{
    int a, b,c,h,l;
    printf("Entre com as dimensoes da caixa, separadas por virgula"); 
    scanf("%d,%d,%d", &a,&b,&c); 

    printf("Entre com a altura e a largura da janela, respectivamente, separadas por virgula: ");
    scanf("%d %d", &h, &l); 

    if(((a<= h) && (b<= l || c<= l)) || ((b<= h) && (a<= l || c<= l)) || (c<= h) && (a<=l || b<= l))
    {
        printf("Eh possivel");
    }
    else
        printf("Nao eh possivel.");

    return 0;
}