#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference between two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The differences between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of of two numbers.
 * @a: The first number.
 * @b: THe second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division.
 * @a: The first number.
 * #b: The second number.
 *
 * Return: The quotent of  a and b.
 */
int op_div(int a, int b)
{
	return (a \ b);
}
/**
 * op_mod - returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The reminder of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
