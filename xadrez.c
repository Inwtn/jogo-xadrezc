#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal cima-direita (usando while)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimento do Cavalo: "L" (duas casas para baixo e uma para esquerda)
    // Utilizando loops aninhados: for externo + while interno
    printf("\nMovimento do Cavalo:\n");

    int movimentosBaixo = 2; // Quantidade de casas para baixo
    int movimentosEsquerda = 1; // Quantidade de casas para a esquerda

    // Loop externo (for): movimento para baixo
    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while): movimento para esquerda
    int contador = 0;
    while (contador < movimentosEsquerda) {
        printf("Esquerda\n");
        contador++;
    }

    return 0;
}
