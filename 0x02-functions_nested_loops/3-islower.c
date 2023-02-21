#include "main.h"
/**
 * _islower()- this program check for lowercase
 * @c: input of the function
 * Return:1 if c is lowercase else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
