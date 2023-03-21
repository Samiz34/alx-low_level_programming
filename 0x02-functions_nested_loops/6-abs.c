#include "main.h"

/**
 * _abs - function of absolute value
 *
 * @a: function parameter
 *
 * Return: return a;
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else
		a = a;
	return (a);
}

