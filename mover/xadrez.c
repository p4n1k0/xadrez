#include <stdio.h>

int main() {
    // --- TORRE ---
    // A torre move-se em linha reta (horizontal ou vertical)
    // Aqui, simulamos o movimento de 5 casas para a direita.
    printf("=== Movimento da TORRE ===\n");
    int casasTorre = 5;

    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // --- BISPO ---
    // O bispo move-se na diagonal.
    // Simulamos o movimento de 5 casas na diagonal "Cima, Direita".
    printf("\n=== Movimento do BISPO ===\n");
    int casasBispo = 5;
    int contador = 1;

    while (contador <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contador);
        contador++;
    }

    // --- RAINHA ---
    // A rainha pode mover-se em qualquer direção.
    // Simulamos o movimento de 8 casas para a esquerda.
    printf("\n=== Movimento da RAINHA ===\n");
    int casasRainha = 8;
    int i = 1;

    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= casasRainha);

    printf("\nMovimentos concluídos!\n");

    return 0;
}
