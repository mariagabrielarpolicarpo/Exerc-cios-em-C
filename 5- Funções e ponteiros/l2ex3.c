#include <stdio.h> 

void converteHora(int s, int *hora, int *min, int *seg)
{
    if(s>=3600)
    {
        *hora = s/3600; 
        s = s - *hora*3600; 
    }
    if(s>=60)
    {
        *min = s/60; 
        s = s - *min*60; 
    }
    *seg = s; 
}

int main() 
{
    int segundos, hora = 0, min = 0, seg = 0; 

    printf("Digite a quantidade de segundos: "); 
    scanf("%d", &segundos); 

    converteHora(segundos, &hora, &min, &seg);

    printf("Formato %d:%d:%d", hora, min, seg); 

    return 0; 
}