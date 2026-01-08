#include <stdio.h>

int main () {

    //######## BISPO ########

    int b = 0; //bishop

    printf("\nMovendo o bispo 5 casas na diagonal direita acima:");

    while (b <= 5) {
        b++;
        printf("\nDireitaAcima");        
    }
    
    //######## TORRE ########

    int r = 1; //rook

    printf("\n\nMovendo a torre 5 casas para a direita:");

    do {
        printf("\nDireita");   
        r++;     
    } while (r <= 5);

    //######## RAINHA ########

    printf("\n\nMovendo a rainha 8 casas para a esquerda:");
    
    for (int q = 1; q <= 8; q++) { //queen
        printf("\nEsquerda");
    }

    return 0;
}