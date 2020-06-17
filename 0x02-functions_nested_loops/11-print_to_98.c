#include "holberton.h"
#include <stdlib.h>
#include<stdio.h>
/**
* print_to_98 - Entry point
* @n: number to count
* Return: all naturals numbers from n to 98
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}

	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
