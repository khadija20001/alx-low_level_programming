#include"main.h"
/**
 *  binary_to_uint - convert a binary number to an unsigned int
 * @b: string
 * Return: result if b contain 0 and 1 else 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int  sum;

	sum = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			sum = (sum << 1) + (b[i] - '0');
		}

		else
		{

			return (0);

		}
	}
	return (sum);
}
