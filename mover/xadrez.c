#include <stdio.h>

// === Função recursiva da TORRE ===
// Move-se 5 casas para a direita
void moverTorre(int casaAtual, int totalCasas)
{
    if (casaAtual > totalCasas)
        return; // caso base (fim da recursão)

    printf("Casa %d: Direita\n", casaAtual);
    moverTorre(casaAtual + 1, totalCasas); // chamada recursiva
}

// === Função recursiva da RAINHA ===
// Move-se 8 casas para a esquerda
void moverRainha(int casaAtual, int totalCasas)
{
    if (casaAtual > totalCasas)
        return; // caso base

    printf("Casa %d: Esquerda\n", casaAtual);
    moverRainha(casaAtual + 1, totalCasas);
}

// === Função recursiva do BISPO ===
// Move-se 5 casas na diagonal (Cima + Direita)
// Inclui loops aninhados dentro da recursão
void moverBispo(int movimentoVertical, int totalCasas)
{
    if (movimentoVertical > totalCasas)
        return; // fim da recursão

    printf("Movimento %d:\n", movimentoVertical);

    // Loop aninhado interno para o movimento horizontal
    for (int movimentoHorizontal = 1; movimentoHorizontal <= 1; movimentoHorizontal++)
    {
        printf("  Cima, Direita\n");
    }

    moverBispo(movimentoVertical + 1, totalCasas); // chamada recursiva
}

// === Movimento do CAVALO ===
// Usa loops aninhados e controle de fluxo
// Duas casas para cima e uma para a direita
void moverCavalo()
{
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("=== Movimento do CAVALO ===\n");

    for (int i = 1, passo = 1; i <= movimentosVerticais; i++, passo++)
    {
        printf("Passo %d: Cima\n", passo);

        // Loop interno: apenas para ilustrar controle de fluxo
        for (int j = 0; j < 2; j++)
        {
            if (j == 1)
                continue; // ignora o segundo ciclo, só para demonstrar
        }
    }

    // Após os movimentos verticais, movimento horizontal
    for (int k = 0; k < movimentosHorizontais; k++)
    {
        printf("Passo 3: Direita\n");

        // Exemplo de uso de break dentro do loop
        if (k == 0)
            break; // só anda uma casa, depois interrompe
    }
}

int main()
{
    printf("=== Movimento da TORRE ===\n");
    moverTorre(1, 5); // recursão: 5 casas

    printf("\n=== Movimento do BISPO ===\n");
    moverBispo(1, 5); // recursão + loop aninhado

    printf("\n=== Movimento da RAINHA ===\n");
    moverRainha(1, 8); // recursão simples

    printf("\n");
    moverCavalo(); // loops complexos

    printf("\nMovimentos concluídos!\n");

    return 0;
}
