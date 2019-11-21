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
 	do
    {
        caractereActuel = fgetc(fichier);  // On lit le caractère        
		if (caractereActuel != EOF)
			printf("%c", caractereActuel); // On l'affiche
    } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
	printf("\n");
	fclose(fichier);
	return 0;
}
