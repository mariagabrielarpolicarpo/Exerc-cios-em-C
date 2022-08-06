#include <stdio.h> 

void removeExtremos(int *n, int *pri, int *ult)
{
int tn,pot;
*ult = *n % 10;
pot=1;
tn = *n;
while(tn >= 10){
tn = tn/10;
pot *= 10;
}
*pri = *n / pot;
*n = *n % pot;
*n = *n / 10;
} 

int main() 
{
    int n, p, u; 

    printf("Digite um numero: "); 
    scanf("%d", &n); 

    removeExtremos(&n, &p,&u); 

    while(p==u)
    {
        removeExtremos(&n, &p, &u); 
        if(n < 10)
        {
            printf("Eh palindromo");
            break; 
        }    
    }
    if(p!=u)
        printf("Nao eh palindromo."); 

    return 0; 
}