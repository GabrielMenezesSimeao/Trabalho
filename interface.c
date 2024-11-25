#include <GL/glut.h>
#include "jogo.h"

Jogo jogo;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glFlush();
}

int main(int argc, char **argv) {
    inicializarJogo(&jogo);
    glutInit(&argc, argv);
    glutCreateWindow("Jogo da Forca");
    glutDisplayFunc(display);
    menu(&jogo); 
    glutMainLoop();
    return 0;
}