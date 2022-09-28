#include "main.h"
/**
 * sqrt_recursion
 * function that returns the natural square root of a number
 * n does not have a natural square root, the function should return -1
 *  @a: The entry is equal to n, of the before function
 *  @b: This is the sum
 *  Return: This is the result
 */
int sqrt_recursion(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (sqrt_recursion(a, b + 1));
}
/**
 * _sqrt_recursion This is the function that is going to perform square root
 * @n: This is my value
 * eturn: This is my result of the function sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}
