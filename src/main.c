#include "ft.h"

int main(void)
{
	FILE* fichier = NULL;
	FILE* term = NULL;
	fichier = fopen("src/test.logo", "r+");

	if (fichier == NULL)
	{
        //* On affiche un message d'erreur si le fichier ne peut pas s'ouvrir ou si il se trouve au mauvais endroit
        printf("Impossible d'ouvrir le fichier");
		term = fopen("term.logo", "w+");
		aff_content(term);

	}

	else if (fichier != NULL && ft_size(fichier) == 0)
	{
        printf("Fichier vide!\n");
		term = fopen("term.logo", "w+");

		aff_content(term);

	}

    else if (fichier != NULL && ft_size(fichier) != 0)
    { 
		printf("Le fichier contient:\n\n");
		aff_content(fichier);
    }
	remove("term.logo");
    return 0;
}
