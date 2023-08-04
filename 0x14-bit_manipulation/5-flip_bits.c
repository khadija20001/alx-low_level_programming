/**
 * flip_bits - give the number of bits you would need to flip.
 * @n: first number
 * @m: second number
 * Return:  number of bits need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, count = 0;

	while (xor > 0)
	{
		if (xor & 1)
		count++;
		xor >>= 1;
	}

	return (count);
}
