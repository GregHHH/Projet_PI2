#include "pile.h"
#include <stdlib.h>
#include <assert.h>

/* indice indiquant le haut de la pile. */
static int _haut = -1;


/* tableau static utilisé pour le stockage de la pile. */
static int _pile[PILE_MAX];


/* Empiler la valeur v dans la pile. */
void push(int v)
{
	_pile[++_haut] = v;
}


/* Dépiler et renvoyer la valeur de l’élément en haut de la pile. */
int pop(void)
{
	return _pile[_haut--];
}


/* Indique si la pile est vide. */
int empty(void)
{
	return _haut < 0;
}