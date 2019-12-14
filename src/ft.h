#define GL_SILENCE_DEPRECATION
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define WIDTH1 640
#define HEIGHT1 480

/* gl.c */
void vDisplay1();
void vReshape1(int w, int h);

/* lil_ft.c */
int aff_content(FILE* fichier);
int ft_size(FILE* fichier);

/* parser.c */
void parser(char *str);

