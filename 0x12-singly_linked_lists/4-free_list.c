#include "lists.h"

/**
 * free_list - function that frees a list
 *@head: Pointer
 *Return: 0
 */

void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
		current = head;
	}
}
