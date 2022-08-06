#include <stdio.h> 

int main()

{
    int i = 1, resto = 0, i2 = 7; 

        while(i2<= 20)
        {
            resto = i%i2; 
            if(resto != 0)
            {
                i = i + 1;
                i2 = 7;   
            } 
            else if(resto == 0)
                i2 = i2 + 1;
        }
    printf("%d eh o numero que queremos.", i); 
    return 0; 
}