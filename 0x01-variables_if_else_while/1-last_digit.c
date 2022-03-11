#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int g;
	g=n%10;
	if (g > 5)
	printf("Last digit of %d is %d  greater than 5\n", n, g);
	if (g == 0)
	printf("Last digit of %d is %d and is zero\n", n, g);
	if (g < 5 && g!=0)
        printf("Last digit of %d is %d and is less than 5\n", n, g);
	    
		
	return (0);
}
