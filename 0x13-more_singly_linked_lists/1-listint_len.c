#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: element of the linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
