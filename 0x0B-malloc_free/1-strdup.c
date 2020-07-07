#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *j;
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	j = malloc(i * sizeof(char) + 1);
	if (j == NULL)
		return (NULL);
	dup = j;
	while (*str)
	{
		*dup = *str;
		dup++;
		str++;
	}
	*dup = '\0';
	return (j);
}
