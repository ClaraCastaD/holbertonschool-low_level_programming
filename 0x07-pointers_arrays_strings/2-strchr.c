#include "holberton.h"

/**
*_strchr - Function that alocates a character
*@s: String
*@c: Returns a pointer to the first occurrence
*Return: Always 0
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
