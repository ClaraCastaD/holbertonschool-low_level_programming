#include "holberton.h"

/**
 *_strspn - Function that gets the lenght of a prefix substring
 *@s: Pointer
 *@accept: Pointer
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j, k;

	for (j = 0; s[j] ; j++)
	{
		for (k = 0; accept[k] ; k++)
		{
			if (s[j] == accept[k])
			{
				i++;
				break;
			}
		}
		if (s[j] != accept[k])
		{
			break;
		}
	}
	return (i);
}
