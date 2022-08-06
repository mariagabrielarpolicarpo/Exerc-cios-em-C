#include <stdio.h> 
int ultdig(int n1, int n2)
{
    while(n2>0)
    {
        if(n1%10!= n2%10 && n2!=0)
            return 0;
        n1 = n1/10; 
        n2 = n2/10; 
        if(n2==0)
            return 1;
    }
}

int segmento(int a, int b)
{
    int aux, r; 
    if(b>a)
        aux = a; a = b; b = aux; 
    while(a>=b)
    {
        r = ultdig(a,b);
        if(r == 1)
            return 1;
        a = a/10; 
    }
    return 0; 
}
int main() 
{
    int n1, n2, r; 
    printf("Digite dois numeros: "); 
    scanf("%d %d", &n1, &n2); 

    r = segmento(n1,n2); 
    printf("Retorno %d", r); 

    return 0; 
}


//EXEMPLO QUE RODA 

int segmento(int a, int b)
{
    int auxa = a, auxb = b; 

    while(a>0 && b> 0)
    {
        if(a%10 == b%10)
        {
            a = a/10; 
            b = b/10; 
        }
        else 
        {
            if(a>b)
            {
                a = a/10; 
                b = auxb; 
            }
            else 
            {
                b = b/10; 
                a = auxa; 
            }
        }  
    if((a<10 && (b%10 == a)) || (b<10 && (a%10 == b)))
    {
        return 1; 
    }
    }
    return 0; 
}

int main()
{
    int a, b; 

    printf("Digite os valores de a e b separados por espaco: "); 
    scanf("%d %d", &a, &b); 

    printf("%d", segmento(a,b)); 

    return 0; 
}