#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of the list.
 *@head: element of the linked list
 *@n: integer
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	struct listint_s *new_node = NULL;
	struct listint_s *temp = NULL;

	new_node = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);

}
