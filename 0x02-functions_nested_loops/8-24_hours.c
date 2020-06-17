#include "holberton.h"
/**
* jack_bauer - check the code for Holberton School students.
*
* Return: Always 0.
*/
void jack_bauer(void)
{
	int h1, h2, m, s;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			if (h1 == 2 && h2 == 4)
				break;
			for (m = 0; m <= 5; m++)
			{
				for (s = 0; s <= 9; s++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(s + '0');
					_putchar('\n');
				}
			}
		}
	}
}
