#include <stdio.h> 

int main()

{
    int x,y, i = 0;

    printf("Digite os numeros x e y sepados por espaco: "); 
    scanf("%d %d", &x,&y); 

    if(y%2!= 0)
        y = y + 1;

    for(y; y< x; y++)
    {
        if(y%2!= 0)
        {
            i++; 
        }
    } 
    printf("Ha %d impares", i); 
    return 0; 
}