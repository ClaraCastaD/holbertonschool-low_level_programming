#include "lists.h"
#include <stdio.h>

/**
 * list_len - Function that returns the numer of elements in a linked list
 * @h: Elements of the structure.
 * Return: Numer of elements.
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
