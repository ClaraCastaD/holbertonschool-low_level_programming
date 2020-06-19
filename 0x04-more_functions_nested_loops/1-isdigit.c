#include "holberton.h"
#include <stdio.h>

/**
*_isdigit - check the code for Holberton School students.
*@c: If c is a digit
* Return: Always 0.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
