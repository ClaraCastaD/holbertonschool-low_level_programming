#include "holberton.h"

/**
 * Auxiliar_function - this function finds the square root.
 * @n: is the constant
 * @x: number
 * Return: Always 0.
 */

int Auxiliar_function(int n, int x)
{
	if (x * x == n)
	return (x);
	else if (x * x > n)
	return (-1);
	else
	return (Auxiliar_function(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the value
 * Return: the natural square root.
 */

int _sqrt_recursion(int n)
{
	return (Auxiliar_function(n, 1));
}
