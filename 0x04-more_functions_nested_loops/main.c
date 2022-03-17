#include "main.h"
#include <stdio.h>
/**
 * main -function run the functions
 */
int main(void)
{
	char c;

	c = 'f';
	printf("%d\n",  _isupper(c));
	c = 'F';
	printf("%d", _isupper(c));
}
