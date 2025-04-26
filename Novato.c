#include <stdio.h>

int main(){


 int opcao, numero;

  printf("Movimentação 'XADREZ'\n");
  printf("1. Torre:\n");
  printf("2. Bispo:\n");
  printf("3. Rainha:\n");
  printf("Escolha uma peça para mover: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Selecione o numero de casas para a TORRE se mover para a DIREITA:\n");
      scanf("%d", &numero);

      for (numero = 1  ; numero < 10 ; numero++){
        printf("DIREITA --> \n");
      } 
       break;

       //case 2:
       // printf("Selecione o numero de casas para  BISPO se mover para a DIAGONAL(direita, esquerda):\n");
        //scanf("%d", &opcao);




    }



    return 0;
}