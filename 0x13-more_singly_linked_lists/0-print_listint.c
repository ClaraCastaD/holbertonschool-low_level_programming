#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: Element of the linked list
 * Return: number or nodes
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
