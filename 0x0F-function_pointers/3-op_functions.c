#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returnsbtge sum of two numbers
 * @a: 1st number to add.
 * @b: 2nd value to add.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference between two numbers.
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: The differnce of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two values.
 * @a: the 1st value
 * @b: the 2nd value
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remaimder of the division of two numbers.
 * @a: first
 * @b: second number
 *
 * Return: The remainder of the division of a nd b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
