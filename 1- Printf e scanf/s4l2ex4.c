#include <stdio.h> 

int main()
{
    int i; char c; float f;  
    printf("Escreva int:"); 
    scanf("%d", &i); 

    printf("Escreva char:"); 
    scanf(" %c", &c);

    printf("Escreva float: "); 
    scanf("%f", &f); 

    printf("%d %c %f", i,c,f);
    return 0;
}