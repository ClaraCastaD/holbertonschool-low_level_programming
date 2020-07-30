#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: element of a linked list
 * @index: index of node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
