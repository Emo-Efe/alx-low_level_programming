#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description - 'check if number is positive or negative'
 * Return:always 0
 **/
int main(void)
{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{	printf("%d n is positive\n", n);
	}
	else if (n == 0)
	{	printf("%d n is zero\n", n);
	}
	else
		printf("%d n is negative\n", n);
	return (0);
}
