#include "ft.h"

void parser(char *str)
{

    // La définitions de séparateurs connus.
    const char * separators = " [],.-!";

    // On cherche à récupérer, un à un, tous les mots (token) de la phrase
    // et on commence par le premier.
    char * strToken = strtok ( str, separators );
    while ( strToken != NULL ) {
        printf ( "%s\n", strToken );
        // On demande le token suivant.
        strToken = strtok ( NULL, separators );
    }

}