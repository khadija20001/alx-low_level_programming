#include <stdio.h>
/**
 * main - this programme print alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
		if (i == 'z')
		{
			for (j = 'A'; j <= 'Z'; ++j)
				putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
