#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - Function that executes a function.
*@size: size of the array.
*@action: A pointer to the function to use
*@array: Pointer
*Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
