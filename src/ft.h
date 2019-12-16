#define GL_SILENCE_DEPRECATION
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#define WIDTH1 640
#define HEIGHT1 480

struct logo
{
   int s;
   int store; // numéro de l'element atteint en dernier
   int type; // Quel mot clé a été lu en dernier
	char fonc[100];
   char cp[][100]; // tableau contenant chaque mot clé / valeur / symbole utilisés dans le code logo
   
};
typedef struct logo t;

struct affichage
{
	int x; // position depart
	int y; // position depart
	int posx; // coordonnée X de la fin du segment tracé
	int posy; // coordonnée Y de la fin du segment tracé 
	int dist; 
	int way;
};
typedef struct affichage a;

/* gl.c */
void vDisplay1();
void vReshape1(int w, int h);

/* lil_ft.c */
int aff_content(FILE* fichier);
int ft_size(FILE* fichier);

/* parser.c */
void parser();
