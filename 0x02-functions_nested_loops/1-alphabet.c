#include "holberton.h"

/**
* print_alphabet - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet(void)
{
	char beta;

	for (beta = 'a'; beta <= 'z'; beta++)
	{
		_putchar(beta);
	}
	_putchar ('\n');
}
