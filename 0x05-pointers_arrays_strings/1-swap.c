#include "main.h"
/**
 *swap_int-a function that swaps two integers
 *@a:input1
 *@b:input2
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
