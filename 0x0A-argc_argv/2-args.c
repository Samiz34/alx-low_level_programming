#include "main.h"
#include <stdio.h>

/**
 * main - print arguments it receives
 *
 * @argc: number of arguments
 * @argv: arra of arguments
 *
 * Return: Zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
