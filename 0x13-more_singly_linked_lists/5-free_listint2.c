#include "lists.h"

/**
 * free_listint2 - function that frees a list.
 * @head: head of the list
 *Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *aux;

	if (head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		aux = tmp->next;
		free(tmp);
		tmp = aux;
	}
	(*head) = NULL;
}
