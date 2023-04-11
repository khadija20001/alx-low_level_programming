#include "main.h"
/**
 * flip_bits- this function returns the number of bits you would need to flip
 * @n: num
 * @m: the second num
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;

	a = n ^ m, b = 0;
	while (a > 0)
	{
		b += (a & 1);
		a >>= 1;
	}

	return (b);
}
