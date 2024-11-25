#ifndef JOGO_H
#define JOGO_H

typedef struct {
    int faseAtual;
    int placar;
    int tentativas;
    char palavra[20];
    char letrasTentadas[26];
} Jogo;

void inicializarJogo(Jogo *jogo);
void salvarPlacar(Jogo *jogo);
void carregarPalavra(Jogo *jogo);
void jogarFase(Jogo *jogo);

#endif
