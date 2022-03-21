#include "main.h"
#include <stdio.h>
/**
 * main -function run the functions
 */
int main(void)
{
	int c;

	c = 6;
	printf("%d\n", _isdigit(c));
	c = 9;
	printf("%d", _isdigit(c));
}
