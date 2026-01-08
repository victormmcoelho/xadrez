#include <stdio.h>

int main () {

    //######## BISPO ########

    printf("\nMovendo o bispo 5 casas na diagonal direita acima:");

    int b = 0; //bishop

    while (b <= 5) {
        b++;
        printf("\nDireitaAcima");        
    }
    

    //######## TORRE ########

    printf("\n\nMovendo a torre 5 casas para a direita:");

    int r = 1; //rook

    do {
        printf("\nDireita");   
        r++;     
    } while (r <= 5);


    //######## RAINHA ########

    printf("\n\nMovendo a rainha 8 casas para a esquerda:");
    
    for (int q = 1; q <= 8; q++) { //queen
        printf("\nEsquerda");
    }


    //######## CAVALO ########

    printf("\n\nSaltando com o cavalo:");

    int n1 = 1; //knight

    while (n1 == 1) {
        for (int n2 = 1; n2 <= 2; n2++) {
            printf("\nBaixo");
        }
        printf("\nEsquerda");
        n1--;
    }

    return 0;
}