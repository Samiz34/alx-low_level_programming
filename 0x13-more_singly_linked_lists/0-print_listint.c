#include "lists.h"

/**
 * print_listint - input_linked elements will be printed
 * @h: input h
 *
 * Return: return 0 or 1
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
