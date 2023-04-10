#include "main.h"
/**
 *print_binary-this function print binary num
 *@n:the int num
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int a = (sizeof(unsigned long int) * 8) - 1;

	for (i = a; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
