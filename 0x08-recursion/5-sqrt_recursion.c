#include "main.h"
/**
 * sqrt_recursion - This is my sqrt_recursion function about the square root
 *  @a: The entry is equal to n, of the before function
 *  @b: This is the sum
 *  Return: This is the final result
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
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 *
 * Return: This is my result of the function sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}
