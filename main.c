#include <stdlib.h>
#include <stdio.h>

int aff_content(FILE* fichier)
{
	int caractereActuel = 0;
 	do
    {
        caractereActuel = fgetc(fichier);  // On lit le caractère            printf("%c", caractereActuel); // On l'affiche
		printf("%c", caractereActuel);
    } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
	fclose(fichier);
	return 0;
}


int main(int ac, char **av)
{
	FILE* fichier = NULL;
	FILE* term = NULL;
	fichier = fopen("test.logo", "r+");
	int size = 0;

    fseek (fichier , 0, SEEK_END);
    size = ftell (fichier );
    rewind(fichier );
	if (fichier == NULL)
	{
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier");
		term = fopen("term.logo", "w+");
		aff_content(term);

	}

	else if (fichier != NULL && size == 0)
	{
        // On affiche un message d'erreur si on veut
        printf("Fichier vide!\n");
		term = fopen("term.logo", "w+");

		aff_content(term);

	}

    else if (fichier != NULL && size != 0)
    {
        // On peut lire et écrire dans le fichier
		printf("Le fichier contient:\n\n");
		aff_content(fichier);
    }
	remove("term.logo");
    return 0;
}
