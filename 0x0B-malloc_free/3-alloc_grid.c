#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *@width: wifth of the grid
 *@height: columns of string
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;
	int c;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(width * sizeof(int));
		if (*(ptr + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = ptr[i];
				free(p);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[c][j] = 0;
		}
	}
	return (ptr);
}
