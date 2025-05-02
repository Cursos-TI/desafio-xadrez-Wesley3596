#include <stdio.h>

void simularMovimento(int casas, int direcaoCodigo) { // Função para mover a peça     
    
    if (casas <= 0) { // Verifica se ainda há casas para mover

        return;
    }

        switch (direcaoCodigo)
        {
            case 1: //Torre

            printf("Esquerda\n");

            break;

            case 2: // Bispo
           
            printf("Cima, Direita\n");   
                
            break;

            case 3:// Rainha

            printf("Esquerda\n"); 

            break;

            case 4:// Cavalo ( 2  cima e 1 direita).

         
            for (int cima = 1; cima <= casas; cima++) {
                for (int direita = 1; direita <= casas; direita++) {
                   
                    if (cima == 2 && direita == 1) {
                        printf("Movendo cavalo %d para cima, e %d para a direita\n", cima, direita);
                    } 

                }
            }
               
                
         
            
            
            break;


                    
            default: 
            printf("Direcao Desconhecida\n");
            break;
        }

        simularMovimento(casas - 1, direcaoCodigo);
}
        
    
    

    int main(){

         // --- Movimento da Torre

        int casasTorre = 5;

        printf("\n--- Movimentacao da Torre (%d casas para Direita) ---\n", casasTorre);
        simularMovimento(casasTorre, 1);

        printf("\n");

        // --- Movimento do Bispo

        int casasBispo = 5;
        printf("\n--- Movimentacao do Bispo (%d casas para 'Cima, Direita') ---\n", casasBispo);
        simularMovimento(casasBispo, 2);

        // --- Movimento do Rainha

        int casasRainha = 8;
        printf("\n--- Movimentacao da Rainha (%d casas para Direita) ---\n", casasRainha);
        simularMovimento(casasRainha, 3);

        // --- Movimento do Cavalo

        int casasCavalo = 2;
        int direita = 1;
        printf("\n--- Movimentacao do Cavalo (%d casas para 'Cima, %d Direita') ---\n", casasCavalo, direita);
        simularMovimento(casasCavalo, 4);



    
        printf("Movimento concluído.\n"); // Mensagem de conclusão

        return 0; 

    }

