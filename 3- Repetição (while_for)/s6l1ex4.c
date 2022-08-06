#include <stdio.h> 

int main()

{
    int n, i, i2; float v1,v2,v3, media; 

    printf("Quantos casos voce quer ver?: "); 
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Digite os valores sepados por espaco: "); 
        scanf("%f %f %f", &v1, &v2,&v3);
        media = ((v1*2 + v2*3 + v3*5)/10);
        printf("A media eh %.1f \n", media/10);
    } 

    return 0;
}