#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: string with arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j = 0;
	int plus = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		plus += atoi(argv[i]);
	}
	printf("%d\n", plus);
	return (0);
}
