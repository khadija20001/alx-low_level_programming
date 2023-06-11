#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sizer;

	i = 0;
	sum = 0;
	sizer = size * size;
	while (i < sizer)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < sizer)
	{
		if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
/*Or we can also use this code :

   void print_diagsums(int *a, int size)
   {
           int i=0;
            int s1=0,s2=0;
   
           for(;i<size;i++)
           {
                   s1+=a[i*(size+1)];
                  s2+=a[(i+1)*(size-1)];
  
          }
  printf("%d, %d\n",s1,s2);
  }
*/
