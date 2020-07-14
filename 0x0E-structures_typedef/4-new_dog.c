#include "dog.h"

/**
 * _strdup - Entry point
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *j;
	char *dup;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	j = malloc(i * sizeof(char) + 1);
	if (j == NULL)
		return (NULL);
	dup = j;
	while (*str)
	{
		*dup = *str;
		dup++;
		str++;
	}
	*dup = '\0';
	return (j);
}

/**
 *new_dog - function that creates a new dog
 *@name: Name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *c, *d;
	dog_t *sun;

	if (name == NULL || owner == NULL)
		return (NULL);

	c = _strdup(name);
	d = _strdup(owner);

	sun = malloc(sizeof(dog_t));
	if (sun == NULL)
		return (NULL);

	else
	{
		sun->name = c;
		sun->owner = d;
		sun->age = age;
	}
	return (sun);
}
