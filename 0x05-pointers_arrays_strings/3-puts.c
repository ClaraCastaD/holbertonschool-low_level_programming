#include "holberton.h"

/**
 * _puts - Entry point
 *@str: pointer, the string to print
 *
 * Return: nothing.
 */
void _puts(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0' ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
