#include "main.h"

/**
 * main - print alphabet 
 * _islower - function to print lower case
 * Return: always Zero
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
