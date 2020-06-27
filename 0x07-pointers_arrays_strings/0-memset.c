#include "holberton.h"

/**
 * _memset - Function that emulates the funcion memset
 * @s: Pointer
 * @b: string
 * @n: Integer
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; c < n ; c++)
	{
		s[c] = b;
	}
	return (s);
}
