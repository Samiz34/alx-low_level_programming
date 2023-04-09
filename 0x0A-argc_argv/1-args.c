#include "main.h"
#include <stdio.h>

/**
 * main - print the number arguments passed into it
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	(void)argv;/*|gnore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
