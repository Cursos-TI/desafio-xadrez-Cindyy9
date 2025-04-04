#include <stdio.h>

int main() {
     
    int i = 0, movimentacao = 2;
    char direcao;

    printf("### Xadrez ###\n");

    printf("\nTorre\n");
    //Mover a torre 5 casas para direita
    for (i = 0 ; i <= 5; i++)
    {
        printf("Direita\n");
    }
    i = 1;
    printf("\nBispo\n");

    //Mover o bispo 5 casas para diagonal direita
    while (i <= 5)
    {
        printf("Cima, direita\n");
        i++;
    }
    
    i = 1;
    printf("\nRainha\n");
    //Mover 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);
   
   
    printf("Escolha a direção do cavalo (D para Direita, E para Esquerda): ");
    scanf(" %c", &direcao);

    // Garantir que a entrada seja válida
    while (direcao != 'D' && direcao != 'E') {
        printf("Entrada inválida! Escolha D para Direita ou E para Esquerda: ");
        scanf(" %c", &direcao);
    }

    // Movimento do cavalo
    while (movimentacao--) {
        printf("Cima\n");
    }
    if (direcao == 'D', 'e') {
        printf("Direita\n");
    } else {
        printf("Esquerda\n");
    }

    return 0;
}