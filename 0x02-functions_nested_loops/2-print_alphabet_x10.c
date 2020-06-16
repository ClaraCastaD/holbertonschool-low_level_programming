#include "holberton.h"

/**
*print_alphabet_x10 - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char beta;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (beta = 'a'; beta <= 'z'; beta++)
		{
			_putchar(beta);
		}

	_putchar('\n');
	}
}
