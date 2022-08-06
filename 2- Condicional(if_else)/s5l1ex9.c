#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main()

{
    srand(time(NULL));
    int n1, n2, operacao, resultado, resp_certa; clock_t tinicio, tfim;  
    n1 = rand() % 100 + 1;
    n2 = rand() % 100 + 1;

    operacao = rand() % 4; 

    tinicio = clock(); 

    if(operacao== 0)
    {
        printf("Quanto eh %d + %d: ", n1, n2); 
        scanf("%d", &resultado); 
        resp_certa = n1 + n2;
    }
    else if(operacao== 1)
    {
        printf("Quanto eh %d - %d: ", n1, n2); 
        scanf("%d", &resultado);
        resp_certa = n1-n2;
    }
    else if(operacao== 2)
    {
        printf("Quanto eh %d x %d: ", n1, n2); 
        scanf("%d", &resultado);
        resp_certa = n1*n2;
    }
    else if(operacao== 3)
    {
        printf("Quanto eh a divisao inteira de %d / %d: ", n1, n2); 
        scanf("%d", &resultado);
        resp_certa = n1/n2;
    }
    else if(operacao== 4)
    {
        printf("Quanto eh o resto de %d por %d: ", n1, n2); 
        scanf("%d", &resultado);
        resp_certa = n1%n2; 
    }
    tfim = clock();
    if(resultado == resp_certa)
    {
        printf("Voce acertou! O tempo de demora foi %f", ((double)tfim - tinicio)/CLOCKS_PER_SEC); 
    }
    else
    {
        printf("Voce errou! O tempo de demora foi %f", ((double)tfim - tinicio)/CLOCKS_PER_SEC);
    }

    return 0;
}