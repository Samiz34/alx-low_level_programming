#include "main.h"
/**
 * main - print alphabet
 * print_alphabet - function that prints alphabet in lower case
 * Return: always Zero
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');

}
