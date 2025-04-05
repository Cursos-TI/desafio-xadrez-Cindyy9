#include <stdio.h>


void moverTorre(int casas) { // Mover a torre 5 casas para a direita
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    printf("Movendo o bispo:\n");

    for (int i = 0; i < casas; i++) {
        printf("Baixo, esquerda\n");
    }
}

void moverRainha(int casas) { // Mover o Rainha 5 casas para a esquerda
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }

}

void moverCavalo(char direcao) {
    for (int i = 0; i < 1; i++) { // Apenas 1 repetição
        int movimentos = 2; // O cavalo sempre sobe 2 casas

        while (movimentos > 0) { // Loop interno para mover para cima
            printf("Baixo\n");
            movimentos--;
        }

        if (direcao == 'D' || direcao == 'd') {
            printf("Direita\n"); // Move 1 casa para a direita
        } else if (direcao == 'E' || direcao == 'e') {
            printf("Esquerda\n"); // Move 1 casa para a esquerda
        } else {
            printf("Direção inválida!\n");
        }
    }
}

int main() {

    int casasTorre, casasBispo, casasRainha;
    char direcao;

    printf("### Xadrez ###\n");

    // Pergunta ao jogador quantas casas mover
    printf("\nDe 1 a 5, quantas casas deseja mover a Torre?\n");
    scanf("%d", &casasTorre);
    moverTorre(casasTorre); // Chamar a função para mover a torre
    
    printf("\nDe 1 a 5, quantas casas deseja movet o Bispo?\n");
    scanf("%d", &casasBispo);
    moverBispo(casasBispo); // Chamar a função para mover o bispo
    
    printf("\nDe 1 a 5, quantas deseja mover o Rainha?\n");
    scanf("%d", &casasRainha);
    moverRainha(casasRainha); // Chamar a função para mover a rainha
    
    // Escolher a direção
    printf("Escolha a direção do cavalo (D para Direita, E para Esquerda):\n");
    scanf(" %c", &direcao);
    moverCavalo(direcao); // Chamar a função para mover o cavalo

    return 0;

}
    