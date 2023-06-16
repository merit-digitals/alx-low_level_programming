#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function to check sign of number.
 *
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 5)
	{
		printf("%d is positive\n", n);
	}
	 if(n == 0)
        {
                printf("%d is zero\n", n);
        }
	  if(n < 6 && n != 0)
        {
                printf("%d is less than 6 and not 0\n", n);
        }
	
	return (0);
}
