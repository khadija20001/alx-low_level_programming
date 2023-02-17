#include <stdio.h>
/**
 * main - this program for printing integers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		if (i < 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(i + '0');
			putchar(' ');
		}
	}
	return (0);
}
