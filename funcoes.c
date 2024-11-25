#include <stdio.h>
#include <string.h>
#include "jogo.h"

void inicializarJogo(Jogo *jogo) {
    jogo->faseAtual = 1;
    jogo->placar = 0;
    jogo->tentativas = 0;
    memset(jogo->palavra, 0, sizeof(jogo->palavra));
    memset
    }