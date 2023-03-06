#include "main.h"

/**
 * _memset -  function that fills memory with a constant byte.
 * @n: bytes of the memory area pointed to by @s
 *
 * @s:pointer
 *
 * @b:input
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
