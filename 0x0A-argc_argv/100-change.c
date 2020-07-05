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
	int cash;
	int i;
	int count;
	int coins[5] = {25, 10, 5, 2, 1};

	count = 0;
	cash = 0;

	if (argc == 2)
	{
		for (i = 0; i <= 4; i++)
		{
			if (atoi(argv[1]) >= coins[i])
			{
				cash = atoi(argv[1]) / coins[i];
				count = atoi(argv[1]) % coins[i];
				break;
			}
		}

		for (i = 0; i <= 4; i++)
		{
			if (count >= coins[i])
			{
				cash++;
				count = count - coins[i];
				i = 0;
			}
		}
	} else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", cash);
	return (0);
}
