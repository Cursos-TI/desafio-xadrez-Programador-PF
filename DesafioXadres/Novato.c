#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) - Usando o for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // A Torre move-se 5 casas para a direita
    }

    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) - Usando o while
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n"); // O Bispo move-se 5 casas na diagonal (cima e direita)
        j++;
    }

    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) - Usando o do-while
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n"); // A Rainha move-se 8 casas para a esquerda
        k++;
    } while (k < 8);

    return 0;
}