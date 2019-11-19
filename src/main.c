#include "ft.h"

int main(int ac, char **av)
{
	
	char *filename = av[1];
	FILE* fichier = NULL;
	FILE* term = NULL;
	fichier = fopen(filename, "r+");
	
	if (ac != 2)
	{
		printf("Entrez le nom du fichier à interpréter");
		return -1;
	}
	else
	{
		if (fichier == NULL)
		{
        	//* On affiche un message d'erreur si le fichier ne peut pas s'ouvrir ou si il se trouve au mauvais endroit
    	   	printf("Impossible d'ouvrir le fichier!\n Le fichier n'existe pas ou ne se trouve pas dans le bon dossier");
			term = fopen("src/term.logo", "w+");
			aff_content(term);
		}

		else if (fichier != NULL && ft_size(fichier) == 0)
		{
    	    printf("Fichier vide!\n");
			term = fopen("src/term.logo", "w+");

			aff_content(term);
		}

    	else if (fichier != NULL && ft_size(fichier) != 0)
    	{ 
			printf("Le fichier contient:\n\n");
			aff_content(fichier);
    	}
		remove("src/term.logo");
	}
    return 0;
}
