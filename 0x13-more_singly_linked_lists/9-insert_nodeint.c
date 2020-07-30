#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: element of the linked list
 * @idx: index of the list
 * @n: new data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = (*head);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
	{
		tmp->next = (*head);
		tmp->n = n;
		(*head) = tmp;
		return (tmp);
	}
	else
	{
		while (new)
		{
			if (i == idx - 1)
			{
				tmp->n = n;
				tmp->next = new->next;
				new->next = tmp;
				return (tmp);
			}
			i++;
			new = new->next;
		}
	}
	return (NULL);
}
