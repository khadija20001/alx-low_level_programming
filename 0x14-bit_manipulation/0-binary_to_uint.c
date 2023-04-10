#include "main.h"
/**
 * binary_to_uint - it is a function that conv binary to unsigned int
 * @b: the array that contain binary nm
 * Return: the result or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			r = r * 2 + (b[i] - 48);
		}
		else
		{
			return (0);
		}
	}
	return (r);
}
