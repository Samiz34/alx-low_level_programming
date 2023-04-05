#include "main.h"
/**
 * _pow_recursion - print the power of the given parameter
 *
 * @x: first parameter
 * @y: second parameter
 *
 * Return: the power of the parameter
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return(x * _pow_recursion(x, y - 1));
}
