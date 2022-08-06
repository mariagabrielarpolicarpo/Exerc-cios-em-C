#include <stdio.h> 

int main()
{
    int mes, dia, ano, diahj, anohj, meshj; 
    printf("Escreva sua data de nascimento do formato (dd/mm/aa): "); 
    scanf("%d/%d/%d", &dia, &mes, &ano); 

    printf("Escreva o dia de hoje no formato (dd/mm/aa): "); 
    scanf("%d/%d/%d", &diahj, &meshj, &anohj);

    if(meshj < mes || (meshj == mes && diahj> dia))
    {
        printf("Voce tem %d anos", anohj - ano - 1);
    }
    else
    {
        printf("Voce tem %d anos", anohj - ano);
    }

    return 0;
}