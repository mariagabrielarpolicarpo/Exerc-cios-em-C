#include <stdio.h> 

int main()

{
    int dia, mes, ano, dia_semana, j,k; 
    printf("Escreva sua data de nascimento do formato (dd/mm/aa): "); 
    scanf("%d/%d/%d", &dia, &mes, &ano); 

    if(mes==1)
    {
        mes = 13; 
        ano = ano - 1;
    }
    else if(mes==2)
    {
        mes = 14; 
        ano = ano - 1; 
    }

    k = ano%100; 
    j = ano/100;

    dia_semana = (dia + ((mes+1)*26)/10 + k + k/4 + j/4 + 5*j)%7; 

    printf("dia da semana: %d , dia: %d, mes: %d, ano: %d, k: %d, j: %d", dia_semana, dia, mes, ano, k , j); 

    if(dia_semana == 0)
        printf("Voce nasceu em um sabado."); 
    else if(dia_semana == 1)
    {
        printf("Voce nasceu em um domingo.");
    }
    else if(dia_semana == 2)
    {
        printf("Voce nasceu em um segunda.");
    }
    else if(dia_semana == 3)
    {
        printf("Voce nasceu em uma terca.");
    }
    else if(dia_semana == 4)
    {
        printf("Voce nasceu em uma quarta");
    }
    else if(dia_semana == 5)
    {
        printf("Voce nasceu em uma quinta");
    }
    else if(dia_semana == 6)
    {
        printf("Voce nasceu em uma sexta");
    }
    return 0;
}