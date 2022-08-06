#include <stdio.h> 

int paridade(int n)
{
    int i, par = 0, impar = 0, num, soma = 0; 

    for(i=0; i<n; i++)
    {
        printf("Digite um numero: "); 
        scanf("%d", &num); 

        if(num%2==0)
            par++; 
        else 
            impar++; 
    }
    if(par==n)
        return 0; 
    else if(impar==n)
        return 1; 
    else 
        return -1; 
}

int quantidade(int n)
{
    int i, soma = 0; 

    for(i=1; soma<n; i++)
    {
        soma = soma + i; 
    }
    if(soma!=n)
        return -5; 
    else 
        return i; 
}

int main() 
{
    int k, r, i, cond = 0, outro = 0, naoeh = 0; 

    printf("Quantos valores vai escrever: "); 
    scanf("%d", &k); 

    r = quantidade(k); 

    if(r==-5)
        printf("Nao eh piramidal."); 
    else 
    {
        for(i=1; i<r; i++)
        {
            cond = paridade(i); 
        
            if(i>1)
            {
                if(cond==0 && outro == 1)
                    outro = 0; 
                else if(cond==1 && outro == 0)
                    outro = 1;
                else
                    naoeh = 5; 
            }
            printf("i %d cond %d outro %d", i, cond, outro);
        }
    }
        if(naoeh==5)
            printf("Nao variam entre apenas par e apenas impar."); 
        else 
            printf("Eh %d-alternante", r-1); 
        return 0;
    }