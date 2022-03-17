#include "main.h"

/**
 * int_isdigit - tells if it is digit or char
 */
int _isdigit(int c)
{
	for (int i = 48;i<=58;i++)
	{
		if (c >= 48 && c <=58)
		{
			return(1);
		}
		else 
		{
			return(0);
		}
	}
}
