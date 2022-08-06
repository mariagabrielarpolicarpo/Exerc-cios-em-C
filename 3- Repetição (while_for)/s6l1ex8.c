#include <stdio.h> 

int main()

{
    int i, soma, casamaior, casamenor; 
    for(i=1000; i<=9999; i++)
    {
        casamaior = i/100; 
        casamenor = i - casamaior*100;
        soma = (casamaior + casamenor)*(casamaior + casamenor); 
        if(soma == i)
        {
            printf("\n%d", i); 
        }
    }

    return 0;
}