#include "main.h"
/**
 * print_alphabet_x10- this program print the alphabets 10 times.
 */
void print_alphabet_x10(void)
{
	int c;
	char s;

	for (c = 0; c < 10; c++)
	{
		for (s = 'a'; s <= 'z'; s++)
			_putchar(s);
		_putchar('\n');
	}
}
