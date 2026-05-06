#include <stdio.h>

// desafio de xadrez - MateCheck (nível mestre)
// objetivo: simular a movimentação das peças usando recursividade e loops complexos

// funções recursivas

// função recursiva para a torre (5 casas para a direita)
void moverTorre(int casas)
{
    if (casas <= 0)
    {
        return; // caso base para a recursão quando as casas acabam
    }
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva subtraindo 1 casa
}

// função recursiva e com loops aninhados para o bispo (5 casas na diagonal cima-direita)
void moverBispo(int casas)
{
    if (casas <= 0)
    {
        return; // caso base
    }

    // loops aninhados para o movimento do bispo
    // loop mais externo para o vertical, mais interno para o horizontal
    for (int i = 0; i < 1; i++)
    {
        printf("Cima\n");
        for (int j = 0; j < 1; j++)
        {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva para o próximo passo diagonal
}

// função recursiva para a Rainha (8 casas para a esquerda)
void moverRainha(int casas)
{
    if (casas <= 0)
    {
        return; // caso base
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

int main()
{
    // declaração de variáveis constantes para representar o número de casas
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;

    // recursividade

    printf("--- Movimentação da Torre ---\n");
    moverTorre(movimentosTorre);
    printf("\n");

    printf("--- Movimentação do Bispo ---\n");
    moverBispo(movimentosBispo);
    printf("\n");

    printf("--- Movimentação da Rainha ---\n");
    moverRainha(movimentosRainha);
    printf("\n");

    // loops
    // movimento em L

    printf("--- Movimentação do Cavalo ---\n");

    // loop externo representa a execução de 1 movimento completo em 'L'
    for (int movimento = 0; movimento < 1; movimento++)
    {
        int passos = 0; // variável múltipla de controle

        // loop interno complexo para lidar com os passos individuais
        while (1)
        { // loop infinito intencional, será quebrado pelo 'break'

            if (passos < 2)
            {
                printf("Cima\n");
                passos++;
                continue; // pula o resto do código e força a próxima iteração do while
            }

            // se o código chegou aqui, é porque passos == 2 (já andou duas para cima)
            printf("Direita\n");
            break; // quebra o loop interno, pois o L está completo
        }
    }
    printf("\n");

    return 0;
}