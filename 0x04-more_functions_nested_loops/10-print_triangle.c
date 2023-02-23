#include "main.h"
/**
 * print_triangle-function print triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, k, p, s;

	i = 0;
	p = size - 1;
	while (i < size)
	{
		for (j = 0; j < p; j++)
		{
			_putchar(' ');
		}
		s = size - p;
		for (k = 0; k < s; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		p--;
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
