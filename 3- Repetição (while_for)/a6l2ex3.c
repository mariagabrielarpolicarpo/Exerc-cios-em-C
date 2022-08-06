#include <stdio.h> 

int main()

{
    int senha; 

    printf("Digite a senha: "); 
    scanf("%d", &senha); 

    while(senha!= 2002)
    {
        printf("Senha invalida."); 
        printf("Digite a senha: "); 
        scanf("%d", &senha);

    }
    printf("Acesso permitido.");

    return 0;
}