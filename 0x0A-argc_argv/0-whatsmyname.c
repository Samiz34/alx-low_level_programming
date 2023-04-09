#include "main.h"
#include <stdio.h>

/**
 * main - prints the name
 *
 * @argc: number of arguments
 * @argv: number of arrays
 *
 * Return: zero
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
