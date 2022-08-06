#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define ORG 'X'
#define VAZ '.'
#define TAM 101

typedef struct{
//char nomeJogo[TAM]; //o nome do jogo deve ser relativo ao padrao
//de inicializacao. Por exemplo, JogoSapo ou JogoBloco
int ciclos; int l; int c;
char **m;
//Atenção! Essa matriz terá que ser alocada dinamicamente
//para que a funcao que inicializa possa funcionar
} Tab;

void **alocaMatriz(Tab *jog);

void **alocaMatriz(Tab *jog){
  int i, j;

  jog->m = (char**)malloc(sizeof(char*)*jog->l);
  for(i=0; i<jog->c; i++){
    jog->m[i] = (char*)malloc(sizeof(char)*jog->c);
  }

  for(i=0; i<jog->l; i++){
    for(j=0; j<jog->c; j++){
      jog->m[i][j] = VAZ;
    }
  }
}

void preenchestruct(Tab *jogo)
{
    jogo->l=22; jogo->c = 22; jogo->ciclos = 30;
    alocaMatriz(jogo);
}


void limpaMatriz(Tab *jogo){
  int i,j;
  for(i=0;i<jogo->l;i++)
    for(j=0;j<jogo->c;j++)
      jogo->m[i][j]=VAZ;
}

void inicBloco(Tab *jogo){

  char padrao[2][2]={{ORG,ORG},{ORG,ORG}};
  int i,j, xInic=(jogo->l-2)/2, yInic=(jogo->c-2)/2;

 limpaMatriz(jogo);

 for(i=0;i<2;i++)
    for(j=0;j<2;j++)
      jogo->m[xInic+i][yInic+j]=padrao[i][j];
}

void inicBlinker(Tab *jogo){

  char padrao[1][3]={{ORG,ORG,ORG}};
  int i,j, xInic=(jogo->l-2)/2, yInic=(jogo->c-2)/2;

  limpaMatriz(jogo);

 for(i=0;i<1;i++)
    for(j=0;j<3;j++)
      jogo->m[xInic+i][yInic+j]=padrao[i][j];
}

void inicSapo(Tab *jogo){

  char padrao[2][4]={{VAZ,ORG,ORG,ORG},{ORG,ORG,ORG,VAZ}};
  int i,j, xInic=(jogo->l-2)/2, yInic=(jogo->c-2)/2;

  limpaMatriz(jogo);

   for(i=0;i<2;i++)
      for(j=0;j<4;j++)
      jogo->m[xInic+i][yInic+j]=padrao[i][j];

}

void inicGlider(Tab *jogo){

  char padrao[3][3]={{ORG,ORG,ORG},{ORG,VAZ,VAZ},{VAZ,ORG,VAZ}};
  int i,j,xInic=jogo->l-6, yInic=jogo->c-6;;

  limpaMatriz(jogo);

  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      jogo->m[xInic+i][yInic+j]=padrao[i][j];
}

void inicLWSS(Tab *jogo){

  char padrao[4][5]={{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,VAZ},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,ORG,ORG,ORG,VAZ}};
  int i,j,xInic=jogo->l-7, yInic=jogo->c-8;;

  limpaMatriz(jogo);

  for(i=0;i<4;i++)
    for(j=0;j<5;j++)
      jogo->m[xInic+i][yInic+j]=padrao[i][j];

}

void imprimeMatriz(Tab *jog){
  int i, j;

  for(i=1; i<jog->l-1; i++){
    for(j=1; j<jog->c-1; j++){
      printf("%c", jog->m[i][j]);
    }
    printf("\n");
  }
}

void menuInicJogo(Tab *jog)
{
    int opcao;

   printf("(1)Bloco\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS\nEntre com a opcao: ");
   scanf("%d",&opcao);
   switch(opcao)
   {
    case 1: inicBloco(jog); break;
    case 2: inicBlinker(jog); break;
    case 3: inicSapo(jog); break;
    case 4: inicGlider(jog); break;
    case 5: inicLWSS(jog); break;
    }

    imprimeMatriz(jog);

    printf("Se inicializacao correta digite qualquer tecla para iniciar o jogo..."); while(getchar()!='\n'); getchar();

}

void copiaMatriz(char **mAnt, Tab *jogo){
  int i, j;
  for(i=0; i<jogo->l; i++){
    for(j=0; j<jogo->c; j++){
      mAnt[i][j] = jogo->m[i][j];
    }
  }
}

void desalocaMatriz(Tab *jogo){
  int i, j;
  for(i=0; i<jogo->l; i++){
    free(jogo->m[i]);
  }
  free(jogo->m);
}

int contaVizinhos(char **mAnt, int x, int y){

  int i, j, vivos=0;

  for(i = x-1; i<=x+1; i++){
    for(j = y-1; j<=y+1; j++){
      if(mAnt[i][j]==ORG){
        vivos++;
      }
    }
  }
  if(mAnt[x][y]==ORG){ // diminui o valor da celula analizada
    vivos--;
  }

  return vivos;
}

void atualizaMatriz(char **mAnt, Tab *jogo){

  int i, j, vizinhos;

  for(i=1; i<jogo->l-1; i++){
    for(j=1; j<jogo->c-1; j++){

      vizinhos = contaVizinhos(mAnt, i, j);

      if(mAnt[i][j] == ORG){ // celula viva
        if(vizinhos == 2 || vizinhos == 3){
          jogo->m[i][j] = ORG;
        } else {
          jogo->m[i][j] = VAZ;
        }
      } else {// celula morta
        if(vizinhos == 3){
          jogo->m[i][j] = ORG;
        } else {
          jogo->m[i][j] = VAZ;
        }
      }

    }
  }

}

void invasores(Tab *jogo){
  //novo padrao de invasores a partir do meio da tela
  char padrao[4][6]={{VAZ,ORG,ORG,VAZ,ORG,ORG},{ORG,ORG,VAZ,ORG,VAZ,ORG}, {VAZ,ORG,ORG,VAZ,ORG,ORG}, {ORG,ORG,VAZ,ORG,VAZ,ORG}};
  int i,j, xInic=(jogo->l-2)/2, yInic=(jogo->c-2)/2;

   for(i=0;i<4;i++)
      for(j=0;j<6;j++)
        jogo->m[xInic+i][yInic+j]=padrao[i][j];
}

void jogaJogoVida(Tab *jog){

  Tab Ant;
  int c;

  Ant.l=jog->l;
  Ant.c=jog->c;

  //imprimindo na tela a matriz inicial
  system("cls");
  imprimeMatriz(jog);
  // getchar();
  Sleep(100);

  alocaMatriz(&Ant);

  for(c=1;c<=jog->ciclos;c++){
    copiaMatriz(Ant.m,jog);

    atualizaMatriz(Ant.m,jog);

    if(c == (jog->ciclos/3)*2){
      invasores(jog);
    }

    system("cls");
    imprimeMatriz(jog);
    // getchar();
    Sleep(100);
  }

  desalocaMatriz(&Ant);

}

int main()
{

  char op='s'; Tab jog;

  preenchestruct(&jog);

  while(op!='n'){
    menuInicJogo(&jog);
    jogaJogoVida(&jog);
    printf("Deseja continuar? (s/n)");
    scanf(" %c", &op);
  }

  desalocaMatriz(&jog);

}
