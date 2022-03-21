#include "main.h"

/**
 * swap_int -it swaps two intigers
 * @a:value 1
 * @b:value 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
