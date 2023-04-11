#include "main.h"
/**
 * clear_bit - is a function that sets the value of a bit to 0
 *@n:pointer
 *@index:the index giving
 *Return:1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	unsigned long int mask = 1UL << index;

	*n &= ~mask;

	return (1);
}
