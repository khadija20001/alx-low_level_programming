#include "main.h"
/**
 * get_endianness-this a function that checks the endianness.
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int n;
	char *a = (char *)&n;

	n = 1;
	if (*a == 1)
		return (1);

	return (0);
}
