#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo=1, torre =1;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("movimeto do bispo\n");
    while (bispo <= 5)
    {
        printf("%d cima, direita\n",bispo );
        bispo ++;
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nmovimento da torre\n");
    do
    {
        printf("%d direita\n", torre);
        torre ++;
    } while (torre<=5);

    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nmovimeto da rainha\n");

    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("%d esquerda \n", rainha);
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n movimento do cavalo \n");
    
    int horizontal, vertical;

    for (horizontal = 1; horizontal <= 1; horizontal++)
    {
        for (vertical = 1; vertical <= 2; vertical++)
        {
            printf("%d baixo \n", vertical);
        }
      
        printf("%d esqueda", horizontal);    
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
