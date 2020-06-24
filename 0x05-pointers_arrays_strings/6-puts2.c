#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 *@str: Pointer, string to print.
 * Return: NOthing
 */
void puts2(char *str)
{
	int i;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
