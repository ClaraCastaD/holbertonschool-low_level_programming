
#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a strin.
 * Return: length
 * @s: pointer.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return  (1 + _strlen_recursion(s + 1));
	}
	return (*s);
}