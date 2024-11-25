#include <stdio.h>
#include "jogo.h"

void menu(Jogo *jogo) {
    int opcao;
    do {
        printf("1. Iniciar Jogo\n");
        printf("2. Estatísticas\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                jogarFase(jogo);
                break;
            case 2:
                printf("Placar: %d\n", jogo->placar);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 3);
}