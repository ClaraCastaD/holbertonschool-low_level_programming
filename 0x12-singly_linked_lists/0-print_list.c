#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of the list
 * @h: Elements of the structure
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while  (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}

		h = h->next;
		counter++;
	}
	return (counter);
}
