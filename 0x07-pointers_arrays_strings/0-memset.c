#include "main.h"

/**
 * _memset - it is funnn 
 * s- size of char
 * b - the char to be replaced
 * n - the orginal string
 * return - char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (i <= n)
	{
		*(s + i) = b;
		i++;
	}
	return &s;
}


