#include "main.h"
/**
 * print_last_digit-print last digit
 *@a: input
 *Return:the  last digit
 */
int print_last_digit(int a)
{
	int n;

	n = a % 10;

	if (a < 0)
	{
		_putchar(-n + '0');
		return (-n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
