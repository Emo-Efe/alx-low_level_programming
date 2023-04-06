#include "main.h"
/**
 * _sqrt_recursion - returns the natural squal root of a number
 * @n: number to calculate the squal root of
 *
 * Return: the resulting squal root
 */
int _sqrt_recursion(int n)
{
	if (n - 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}
