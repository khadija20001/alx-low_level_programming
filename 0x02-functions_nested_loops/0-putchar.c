#include "main.h"
/**
 * main - this program print _putchar
 * Return:0
 */
int main(void)
{
	char c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 9; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
