#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // declaração de variáveis constantes para representar o número de casas que cada peça pode se mover
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;

    // implementação de movimentação da torre
    // utilizando a estrutura for para simular a movimentação da torre para a direita
    printf("--- Movimentação da Torre ---\n");
    for (int i = 0; i < movimentosTorre; i++)
    {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de movimentação do bispo
    // utilizando a estrutura while para simular a movimentação do bispo em diagonal
    printf("--- Movimentação do Bispo ---\n");
    int contadorBispo = 0;
    while (contadorBispo < movimentosBispo)
    {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // implementação de movimentação da rainha
    // utilizando a estrutura do-while para simular a movimentação da rainha para a esquerda
    printf("--- Movimentação da Rainha ---\n");
    int contadorRainha = 0;
    do
    {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Utilizando loops aninhados para simular a movimentação do Cavalo em L.
    printf("--- Movimentação do Cavalo ---\n");
    
    // variáveis que definem a quantidade de passos do L
    const int casasBaixo = 2;
    const int casasEsquerda = 1;

    // loop externo (for): controla a "fase" do movimento. 
    // fase 0 = movimento vertical (baixo)
    // fase 1 = movimento horizontal (esquerda)
    for (int fase = 0; fase < 2; fase++) 
    {
        if (fase == 0) 
        {
            // loop interno 1 (while): dá os 2 passos para baixo
            int passoVertical = 0;
            while (passoVertical < casasBaixo) 
            {
                printf("Baixo\n");
                passoVertical++;
            }
        } 
        else 
        {
            // loop interno 2 (do-while): dá 1 passo para a esquerda
            int passoHorizontal = 0;
            do 
            {
                printf("Esquerda\n");
                passoHorizontal++;
            } while (passoHorizontal < casasEsquerda);
        }
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}