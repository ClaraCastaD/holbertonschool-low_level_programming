#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a linked list
 * @head: element of a linked list
 * Return: the sum of all data (n) of a list
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum);
}
