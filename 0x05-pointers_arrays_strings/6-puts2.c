#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: parameter
 *
 * Return: zero
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}

}
