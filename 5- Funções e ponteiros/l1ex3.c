#include <stdio.h> 
#include <ctype.h> 

int testaTipoChar (char c)
{
    if (isupper(c))
        return 1;
    else if(islower(c))
        return 2; 
    else if(isdigit(c))
        return 3; 
    return 0; 
}

int main() 
{
    char c; int v; 

    printf("Digite algo:"); 
    scanf("%c", &c); 

    v = testaTipoChar(c);
    printf("Retorno %d", v); 

    return 0; 
}