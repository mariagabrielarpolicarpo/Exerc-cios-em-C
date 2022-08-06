#include <stdio.h> 

int main() 

{
    int n1, n2, i = 2, mmc = 1; 

    printf("Digite n1 e n2 separados por espaco: "); 
    scanf("%d %d", &n1, &n2); 

    while(n1 != 1 || n2!= 1)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            n1 = n1/i; 
            n2 = n2/i; 
            mmc = mmc*i; 
        }
        else if(n1%i== 0)
        {
            n1 = n1/i; 
            mmc = mmc*i;
        }
        else if(n2%i==0)
        {
            n2 = n2/i; 
            mmc = mmc*i; 
        }
        else 
        {
            i = i + 1; 
        }
    }
    printf("O mmc eh %d", mmc); 

    return 0; 
}