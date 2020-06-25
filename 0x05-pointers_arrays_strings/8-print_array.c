#include "holberton.h"

/**
 * print_array - Write a function that prints n elements of an array
 *@a: pointer variable
 *@n: integer
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}

	}
	printf("\n");
}
