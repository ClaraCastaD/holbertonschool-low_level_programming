#include "holberton.h"

/**
 *_strlen - Entry point
 *@s: pointer to know length
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
