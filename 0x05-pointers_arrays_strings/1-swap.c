#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students.
 *@a: Swap integers
 *@b: swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
