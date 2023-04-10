#include "main.h"
/**
 *print_binary-this function print binary num
 *@n:the int num
 */
void print_binary(unsigned long int n)
{
	unsigned long int a;
	int sh;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (a = n, sh = 0; (a >>= 1) > 0; sh++)
		;

	for (; sh >= 0; sh--)
	{
		if ((n >> sh) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
