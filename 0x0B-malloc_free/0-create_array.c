#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *@size: size of the array
 *@c: char
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *j = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		j = (char *)malloc(size * sizeof(char));
		if (j != NULL)
		{
			for (i = 0; i < size; i++)
				j[i] = c;
		}
	}
	return (j);
}
