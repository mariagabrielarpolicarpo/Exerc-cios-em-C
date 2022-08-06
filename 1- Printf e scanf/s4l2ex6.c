#include <stdio.h> 

int main()

{
    int n1, n2; 
    float media; 

    printf("Digite n1: "); 
    scanf("%d", &n1); 

    printf("Digite n2: "); 
    scanf("%d", &n2); 

    media = (n1 + n2)/ 2; 

    printf("%.1f", media); 

    return 0; 
}