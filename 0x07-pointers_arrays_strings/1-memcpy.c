#include "holberton.h"

/**
* _memcpy - Entry point
* Desc: Entry
*@dest: pointer
*@src: pointer
*@n: number the bytes
* Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; c < n ; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
