#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* *
 *main - Determine if the random number is positive, negative  or zero
 * 
 * Return 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ( n > 0 )
	{
		printf("%d is %s\n", n,"positive");
	}
       	else if ( n == 0 )
	{
		printf("%d is %s\n", n, "zero");
	}
       	else 
	{
		printf("%d is %s\n", n,"negative");
	}
	return (0);
}
