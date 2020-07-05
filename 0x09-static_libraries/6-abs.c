#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 *@c: Number to check
 * Return: Always 0.
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (-1 * c);
}
