#include "holberton.h"

/**
* _islower - check the code for Holberton School students.
*@c: if is uppercase return 0, else return 1
* Return: Always 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
