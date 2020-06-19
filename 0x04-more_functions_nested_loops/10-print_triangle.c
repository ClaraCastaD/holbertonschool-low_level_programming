#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: print triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, d;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0 ; a < size ; a++)
	{
		for (d = 0 ; d < size ; d++)
		{
			if (d >= size - a - 1)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
