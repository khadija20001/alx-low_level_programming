#include "main.h"
/**
 *_strcat-  function that concatenates two strings.
 *@dest:input
 *@src:input
 *Return:result
 */
char *_strcat(char *dest, char *src)
{
	char s[100];
	int i, j, k = 0;

	for (i = 0; dest[i] != '\0'; i++)
		s[i] = dest[i];
	for (j = i - 1; src[k] != '\0'; j++)
	{
		s[j] = src[k];
		k++;
	}
	dest[j] = s[j];
	dest[j] = '\0';
	return (dest);
}
