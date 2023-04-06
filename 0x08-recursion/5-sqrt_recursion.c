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
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * squar root of a number
 * @n: number tocalculate the squar root of
 * @i: Iterator
 * Return: the resulting squar root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
