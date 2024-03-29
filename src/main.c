#include "ft.h"

int main(int ac, char **av)
{

	glutInit(&ac,av);
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);

	char *filename = av[1];
	FILE* fichier = NULL;
	FILE* term = NULL;
	fichier = fopen(filename, "r+");
	char buff[1000];
	int W1;
	
	/* Pas suffisamment d'arguments. fin du programme */
	if (ac != 2)
	{
		printf("Entrez le nom du fichier à interpréter");
		return -1;
	}
	else
	{
		if (fichier == NULL)
		{
    	   	printf("Impossible d'ouvrir le fichier!\n Le fichier n'existe pas ou ne se trouve pas dans le bon dossier");
			term = fopen("src/term.logo", "w+");

			printf( "Entrez le programme à interpréter: " );
			fgets(buff, 1000, stdin);
			printf("le buffer contient: %s\n", buff);
			fprintf(term, "%s", buff);

			aff_content(term);
		}

		/* fichier vide, on crée un fichier vide qui servira à contenir notre programme à interpreter */
		else if (term != NULL && ft_size(term) == 0)
		{
    	    printf("Fichier vide!\n");
			term = fopen("src/term.logo", "w+");
			printf( "Entrez le programme à interpréter:\n" );
			fgets(buff, 1000, stdin);
			printf("le buffer contient: %s\n", buff);
			fprintf(term, "%s", buff);
		
			aff_content(term);

		}

		/* fichier remplit, on exécute le programme normalement */
    	else if (fichier != NULL && ft_size(fichier) != 0)
    	{
			printf("\nLe fichier contient:\n\n");
			aff_content(fichier);
			printf("-----------------------\n\n");

			glutInitWindowSize(WIDTH1,HEIGHT1);
			glutInitWindowPosition(150,150);
			W1=glutCreateWindow("Logo");
			glutDisplayFunc(vDisplay1);
			glutReshapeFunc(vReshape1);
			glutMainLoop();
			remove("src/term.logo");
		}
    	return 0;
	}

	
}
