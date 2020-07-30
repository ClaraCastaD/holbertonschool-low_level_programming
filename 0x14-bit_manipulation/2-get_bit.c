#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val = sizeof(unsigned long int) * 8;

	if (index > val)
		return (-1);
	return ((n >> index) & 1);
}
