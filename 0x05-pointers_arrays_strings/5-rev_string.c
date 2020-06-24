#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - the function reverses
 *@s: pointer, the string to print
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char k;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	i--;
	for (j = 0 ; j < i ; j++, i--)
	{
	k = *(s + i);
	*(s + i) = *(s + j);
	*(s + j) = k;
	}
}
