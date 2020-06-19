#include "holberton.h"

/**
* print_numbers - check the code for Holberton School students.
* Desc: Entry
* Return: Always 0.
*/
void print_numbers(void)
{
	char n;

	for (n = '0' ; n <= '9' ; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');
}
