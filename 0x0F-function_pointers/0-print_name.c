#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 *@name: The name we want to rpint
 *@f:ponter to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
