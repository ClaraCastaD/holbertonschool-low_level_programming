#include "holberton.h"

/**
 *_strstr - function that locates a substring.
 *@haystack:Pointer
 *@needle:Pointer
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] ; i++)
	{
		for (k = i, j = 0; needle[j] ; j++, k++)
		{
			if (haystack[k] != needle[j] || haystack[k] == '\0')
			{
				break;
			}
		}
		if (needle[j] == 0)
		{
			return (haystack + i);
		}
	}
	return (0);
}
