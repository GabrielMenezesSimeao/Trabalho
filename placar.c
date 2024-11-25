#include <stdio.h>
#include "jogo.h"

void salvarPlacar(Jogo *jogo) {
    FILE *file = fopen("placar.txt", "w");
    if (file != NULL) {
        fprintf(file, "Placar: %d\n", jogo->placar);
        fclose(file);
    } else {
        printf("Erro ao salvar o placar.\n");
    }
}