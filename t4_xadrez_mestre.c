#include <stdio.h>

void mover(int casas, char *peca, char *direcao) {
    if (casas > 0) {
        printf("\n%s uma casa %s...", peca, direcao);
        mover(casas - 1, peca, direcao);
    }
}

int main () {

    //######## BISPO ########

    printf("\nMovendo o bispo 5 casas na diagonal direita acima:");

    mover(5, "Bispo", "na diagonal direita acima");

    printf("\nOu...");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j == 1; j++) { //fiz assim pois o problema pediu loops aninhados, mas não acho que seja a melhor solução (ou não entendi direito)
            printf("\nDireita");
        }
        printf("\nAcima");
    }

    //######## TORRE ########

    printf("\n\nMovendo a torre 5 casas para a direita:");

    mover(5, "Torre", "para a direita");

    //######## RAINHA ########

    printf("\n\nMovendo a rainha 8 casas para a esquerda:");
    
    mover(8, "Rainha", "para a esquerda");

    //######## CAVALO ########

    printf("\n\nSaltando uma casa com o cavalo:");

    for (int x = 0, y = 0; x <= 1 && y <= 2; x += (y == 2 ? 1 : 0), y += (x == 0 ? 1 : 0)) {
        if (x > 0) {
            printf("\nUma casa para a direita...");
        }
        if (y < 2) {
            printf("\nUma casa para cima...");
        } 
    }

    return 0;
}