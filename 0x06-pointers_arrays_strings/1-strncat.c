#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenat
 * Return: `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[i + k] = src[k];
	}
	return (dest);
}

