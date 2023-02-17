#include <stdio.h>
/**
 * main -main block
 * Return: 0
 */
int main(void)
{
	int i, j, k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = k; j <= 9; j++)
		{
			if (j != i)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
			if (i == j)
				continue;
			if (i == 8 && j == 9)
				break;

			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
