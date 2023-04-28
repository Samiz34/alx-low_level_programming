#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @a: number of bytes to allocate
 *
 * Return: b pointer to the allocated memory
 */
void *malloc_checked(unsigned int a)
{
	void *ptr;

	ptr = malloc(a);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
