#include <stdio.h>

int main() {
     
    int i = 0;

    printf("### Xadrez ###\n");

    printf("\nTorre\n");
    //Mover a torre 5 casas para direita
    for (int i = 0; i <= 5; i++)
    {
        printf("Direita\n");
    }

    printf("\nBispo\n");
    //Mover o bispo 5 casas para diagonal direita
    while (i <= 5)
    {
        printf("Cima, direita\n");
        i++;
    }

    printf("\nRainha\n");
    //Mover 8 casas para a esquerda
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);
    

    return 0;
}