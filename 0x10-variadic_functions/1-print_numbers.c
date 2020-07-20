#include "variadic_functions.h"

/**
* print_numbers -  Function that prints numbers
*@separator: String to be printed
*@n: number of integers passed to the function
*Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));

		if (separator != 0 && i < n - 1)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
