#include "lists.h"

/**
 * delete_nodeint_at_index -function that deletes the node at index
 * @head: element of the linked list
 * @index: the index of the node
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	temp2 = (*head);
	while (temp2 != NULL)
	{
		if (index == 0)
		{
			temp = temp2;
			*head = temp2->next;
			free(temp);
			return (1);
		}
		if (i == index - 1)
		{
			temp = temp2->next;
			temp2->next = (temp2->next)->next;
			free(temp);
			return (1);
		}
		i++;
		temp2 = temp2->next;
	}
	return (-1);
}
