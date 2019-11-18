#include "ft.h"

int main(void)
{
	FILE* fichier = NULL;
	FILE* term = NULL;
	fichier = fopen("test.logo", "r+");

	if (fichier == NULL)
	{
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier");
		term = fopen("term.logo", "w+");
		aff_content(term);

	}

	else if (fichier != NULL && ft_size(fichier) == 0)
	{
        // On affiche un message d'erreur si on veut
        printf("Fichier vide!\n");
		term = fopen("term.logo", "w+");

		aff_content(term);

	}

    else if (fichier != NULL && ft_size(fichier) != 0)
    {
        // On peut lire et écrire dans le fichier
		printf("Le fichier contient:\n\n");
		aff_content(fichier);
    }
	remove("term.logo");
    return 0;
}
