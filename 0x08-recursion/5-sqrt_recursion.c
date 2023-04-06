#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of n
 * .
 * @n: Number Integer
 * @i: Number Integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 *sqrt_helper - Helper function for calculating square root recursively.
 *Return: The natural square root of the number, or -1 if not found.
 *
 *
 */
int sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}

int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}
