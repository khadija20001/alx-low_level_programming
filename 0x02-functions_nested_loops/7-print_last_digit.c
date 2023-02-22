#include "main.h"
/**
 * print_last_digit-print last digit
 *@a: input
 *Return:the  last digit
 */
int print_last_digit(int a)
{
	int n;

	if (a < 0)
	{
		n = -a % 10;
		_putchar(n + '0');
	}
	else
	{
		n = a % 10;
		_putchar(n + '0');
	}
	return (n);
}
