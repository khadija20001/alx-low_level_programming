#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this prigram define the last digit
 * Return: 0
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	c = n % 10;
	printf("Last digit of %d is %d", n, c);
	if (c > 5)
		printf(" and is greater than 5\n");
	else if (c == 0)
		printf(" and is 0\n");
	else if (c < 6 && c != 0)
		printf(" and is less than 6 and not 0\n");
	return (0);
}
