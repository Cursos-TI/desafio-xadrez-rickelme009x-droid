#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int bispo = 1;
    int rainha = 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("*** BISPO ***\n"); //Nome da peça para manter o código mais organizado
    
    do {
        printf("O BISPO se movimentou %d na diagonal superior direita\n", bispo); // O printf está indicando para onde a peça está se movendo
        bispo++;
    } while (bispo <= 5);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("*** TORRE ***\n"); //Nome da peça para manter o código mais organizado
    
    for(int torre = 1; torre <= 5; torre++) {
        printf("A TORRE se movimentou %d pra direita\n", torre); // O printf está indicando para onde a peça está se movendo
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("*** RAINHA ***\n"); //Nome da peça para manter o código mais organizado
   
    while (rainha <= 8) {
        printf("A RAINHA se movimentou %d pra esquerda\n", rainha); // O printf está indicando para onde a peça está se movendo
        rainha++;
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
