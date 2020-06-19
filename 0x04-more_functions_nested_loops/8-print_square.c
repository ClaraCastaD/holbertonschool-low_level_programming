#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 *@size: print #
 * Return: Always 0.
 */
void print_square(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (c = 0 ; c < size ; c++)
	{
		for (d = 0 ; d < size ; d++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
