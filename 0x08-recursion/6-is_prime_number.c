#include "holberton.h"

/**
 * divisor - it finds the prime number.
 * @x: integ
 * @n: int
 * Return: increment x and compare to n.
 */

int divisor(int x, int n)
{
	if (n == x)
	return (1);
	else if (n % x == 0)
	return (0);
	return (divisor(x + 1, n));
}

/**
 * is_prime_number - finds the prime number.
 * @n: is the number to compare
 * Return: a prime number.
 */

int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
	return (0);
	return (divisor(2, n));
}
