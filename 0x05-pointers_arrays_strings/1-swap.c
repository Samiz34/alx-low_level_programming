#include "main.h"

/**
 * swap_int - the parametes to be swaped
 * @a: value 1
 * @b: value 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;

}
