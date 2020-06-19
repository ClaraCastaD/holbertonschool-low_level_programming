#include "holberton.h"

/**
* print_diagonal - check the code for Holberton School students.
*@n: print \
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (c = 0 ; c < n ; c++)
	{
		for (d = 0 ; d < c ; d++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
