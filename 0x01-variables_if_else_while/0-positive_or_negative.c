#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * Main - Prints if the number printed is
 *	  positive, negative or zero.
 *
 * Return: Always returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
  if ( n > 0 )
	{
          printf("&d is positive\n", n);
	}
  else if ( n < 0 )
	{
          printf("&d is negative\n", n);
	}
  else
	{
          printf("%d is zero\n", n);
	}
  
	return (0);
}
