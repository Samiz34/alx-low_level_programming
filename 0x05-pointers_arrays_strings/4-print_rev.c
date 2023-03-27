#include "main.h"
/**
 * print_rev - print in reverse
 * @s: parameter
 * Return: zero
 */

void print_rev(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] = '\0'; i++)
		count++;
	for (i = count ; s[i] >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');

}
