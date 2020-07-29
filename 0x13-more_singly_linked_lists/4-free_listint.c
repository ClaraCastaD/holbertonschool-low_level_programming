#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: element of the linked list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	struct listint_s *temp = NULL;
	struct listint_s *aux =  NULL;

	temp = head;
	while (temp != NULL)
	{
		aux = temp->next;
		free(temp);
		temp = aux;
	}
	head = NULL;
}
