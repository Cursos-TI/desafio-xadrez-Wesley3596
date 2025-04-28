#include <stdio.h>

int main(){


 int opcao, numero;

  printf("Movimentacao jogo de XADREZ\n");
  printf("1. Torre:\n");
  printf("2. Bispo:\n");
  printf("3. Rainha:\n");
  printf("4. Cavalo:\n");
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

        case 4:
        printf("Movendo Cavalo:\n"); //(duas para baixo, uma para a esquerda) em L..

        for (numero = 0  ; numero < 1 ; numero++)
        {
          for (numero = 0; numero < 2; numero++)
          {
            printf("BAIXO .. \n");
          }
          printf("ESQUERDA .. \n");
          
        } 
        break;

        default:
        printf("Opcao invalida\n");
        break;
      




    }



    return 0;
}