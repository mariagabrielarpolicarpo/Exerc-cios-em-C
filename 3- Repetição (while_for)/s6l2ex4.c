#include <stdio.h>

int main()

{
    int n1, n2, mmc = 0, i; 

    printf("Digite os numeros que voce quer calcular o mmc separados por espaco: "); 
    scanf("%d %d", &n1,&n2); 

    for(i=2; mmc!= i; i++)
    {
        if(i%n1 == 0 && i%n2 == 0)
        {
            mmc = i; 
            break; 
        }
    }
    printf("O MMC entre os numeros eh: %d", mmc); 

    return 0; 
}

