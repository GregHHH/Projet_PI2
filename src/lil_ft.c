#include "ft.h"

int ft_size(FILE* fichier)
{
	int size = 0;

	fseek (fichier , 0, SEEK_END);
    size = ftell (fichier );
	rewind(fichier);
    return size;
}

int aff_content(FILE* fichier)
{
    int caractereActuel = 0;
    t v;
    int i = 0;
    v.s = 0;
	int c = 0;

 	do
    {
        caractereActuel = fgetc(fichier);  // On lit le caractère        
		if (caractereActuel != EOF)
		{
			printf("%c", caractereActuel); // On l'affiche
                v.cp[i] = caractereActuel; //copie du contenu dans cp[]
                i ++;
                v.s = i ; 
		}
    } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
	printf("\n");
	return 0;
}


void display()
{
    a a;
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // Epaisseur
    glPointSize(5.0);

    // draw
    glBegin(GL_LINES);
    glVertex2f(a.x,a.y); // Point de départ
    glVertex2f(a.posx,a.posy); // point d'arriver
     
    a.x = a.posx;
    a.y = a.posy;

    glEnd();

    glFlush();
}

