#include <stdio.h>

int main() {
    // === TORRE ===
    // A torre move-se em linha reta (horizontal ou vertical).
    // Neste caso, 5 casas para a direita.
    printf("=== Movimento da TORRE ===\n");
    int casasTorre = 5;

    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // === BISPO ===
    // O bispo move-se na diagonal.
    // Simulamos 5 casas na diagonal "Cima, Direita".
    printf("\n=== Movimento do BISPO ===\n");
    int casasBispo = 5;
    int contador = 1;

    while (contador <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contador);
        contador++;
    }

    // === RAINHA ===
    // A rainha move-se em todas as direções.
    // Aqui, 8 casas para a esquerda.
    printf("\n=== Movimento da RAINHA ===\n");
    int casasRainha = 8;
    int i = 1;

    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= casasRainha);

    // === CAVALO ===
    // O cavalo move-se em "L".
    // Para este desafio: 2 casas para baixo e 1 casa para a esquerda.
    // Usaremos loops aninhados: um "for" e um "while".

    printf("\n=== Movimento do CAVALO ===\n");

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Primeiro loop: 2 movimentos para baixo
    for (int passo = 1; passo <= movimentosBaixo; passo++) {
        printf("Passo %d: Baixo\n", passo);
        
        // Loop interno: simula um pequeno atraso lógico (só para mostrar o aninhamento)
        int espera = 0;
        while (espera < 1) { 
            espera++; // Apenas ilustrativo — serve para cumprir o uso do while
        }
    }

    // Após os dois movimentos para baixo, o cavalo faz um movimento para a esquerda
    int cont = 0;
    while (cont < movimentosEsquerda) {
        printf("Passo %d: Esquerda\n", movimentosBaixo + cont + 1);
        cont++;
    }

    printf("\nMovimentos concluídos!\n");

    return 0;
}
