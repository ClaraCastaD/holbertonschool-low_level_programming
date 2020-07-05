#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int multiplication;

	(void)argv;
	if (argc == 3)
	{
		multiplication = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiplication);
	}
	else
	{
		puts("Error");
	}
	return (0);
}
