#include "main.h"

/**
 * swap_int - swap two integers
 *
 *@a: it is the value going to be sawped to b
 *
 *@b: it is the value going to be swaped to a
 *
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
