#include "main.h"

/**
 * print_last_digit - function to print the last digit
 *
 * @i: function parameters
 *
 * Return: k
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if  (i < 0)
		k = -k;
	return (k);

}
