#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - state if the integer is a prime number or not.
 * @n: number to evaluate
 *
 * Return: integer value.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if a number is prime.
 * @n: number to evaluate
 * @i: interation time.
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int check_prime(int n, int i)
{
	if (i <= 1)
		return (1);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i - 1));
}
