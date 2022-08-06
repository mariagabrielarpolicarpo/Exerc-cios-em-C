#include <stdio.h> 

int main() 

{
    int ze= 110, chico = 150, i = 0; 
    while(ze<=chico)
    {
        chico = chico + 2; 
        ze = ze + 3; 
        i = i + 1; 
    }
    printf("Serao necessarios %d anos para ze ser maior do que chico.", i); 


    return 0;
}