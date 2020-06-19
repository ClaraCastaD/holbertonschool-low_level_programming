#include "holberton.h"

/**
* more_numbers - check the code for Holberton School students.
* Disc: entry
* Return: Always 0.
*/
void more_numbers(void)
{
	int a, b, c, d;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b > 9)
			{
				c = b / 10;
				_putchar (c + '0');
			}
			d = b % 10;
			_putchar (d + '0');
		}
		_putchar ('\n');
	}
}
