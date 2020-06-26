#include "holberton.h"

/**
* _strncat - The source
*@dest: poinetr to the destination array
*@src: string to be appended
*@n: maximum of characters to be appended
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
