#include "holberton.h"

/**
 * print_diagsums - function that prints
 *@a: Pointer
 *@size: integer
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size ; i++)
	{
		for (j = 0; j < size ; j++)
		{
			k = (i * size) + j;
			if (i == j)
			{
				diag1 = diag1 + a[k];
			}
			if ((i + j) == (size - 1))
			{
				diag2 = diag2 + a[k];
			}
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
