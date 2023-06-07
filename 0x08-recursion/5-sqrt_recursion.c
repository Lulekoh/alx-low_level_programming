#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: value to calculate the square root of
 *
 * Return: square roots result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number.
 * @n: value to calculate the square root of
 * @i: interator
 *
 * Return: square root result
 */
int actual_sqrt_recursion(int n, int i)
{
	if (1 * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}