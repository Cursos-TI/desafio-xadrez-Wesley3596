#include <stdio.h>

int main(){


 int opcao, numero;

  printf("Movimentacao jogo de XADREZ\n");
  printf("1. Torre:\n");
  printf("2. Bispo:\n");
  printf("3. Rainha:\n");
  printf("Escolha uma peca: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Movendo TORRE:\n");
    

      for (numero = 0  ; numero < 5 ; numero++){
        printf("DIREITA --> \n");
      } 
       break;

       case 2:
        printf("Movendo BISPO:\n"); //cima e à direita

        for (numero = 0  ; numero < 5 ; numero++){
          printf("CIMA .. \n");
          printf("DIREITA .. \n");
        } 
        break;

        case 3:
        printf("Movendo RAINHA:\n"); //oito casas para a esquerda.

        for (numero = 0  ; numero < 8 ; numero++){
          printf("ESQUERDA .. \n");
          
        } 
        break;
        default:
        printf("Opcao invalida\n");
        break;
      




    }



    return 0;
}