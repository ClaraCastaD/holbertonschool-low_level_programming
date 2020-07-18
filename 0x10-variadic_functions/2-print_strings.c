#include "variadic_functions.h"

/**
* print_strings - Function that prints strings
*@separator: String to be printed between the strings
*@n: Number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *c;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(valist, char*);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);

		if (separator != NULL &&  i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
