#include "holberton.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	int c;

	for (c = 1 ; c <= 100 ; c++)
	{
		if (c % 3 != 0 && c % 5 != 0)
		{
			printf("%d ", c);
		}
		else
		{
			if (c % 3 == 0)
			{
				printf("Fizz");
			}
			else if (c % 5 == 0)
			{
				printf("Buzz");
			}
			else if (c == 100)
			{
				putchar('\n');
			}
			else
			{
				putchar(' ');
			}
		}
	}
	return (0);
}
