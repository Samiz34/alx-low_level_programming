#include "main.h"
/**
 * _strlen_recursion - print length of a string
 *
 * @s: output
 *
 * Return: Zero
 */
int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return  (longi);
}
