#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */

/*char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);*/ //we can use the programm bellow also 
	
}
char *_strchr(char *s, char c)
   {
           int i;
         for (i=0;s[i]!='\0';i++)
           {
                   if(s[i]==c)
                  {
                          s=&s[i];
                          return s;
                  }
          }
          return &s[i];
 }
         
