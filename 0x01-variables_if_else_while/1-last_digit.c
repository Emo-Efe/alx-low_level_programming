#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - function
 * Return: 0 always
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is and is zero", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is and less than 6 and not 0", n, m);
	printf("\n");
	return (0);
