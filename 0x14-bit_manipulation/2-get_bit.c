#include "main.h"
/**
 * get_bit-this function returns the value of a bit at a given index.
 * @n:the int num
 * @index:the index
 * Return: -1 ,1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
