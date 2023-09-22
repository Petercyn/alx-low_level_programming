#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: pointer to linked list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
