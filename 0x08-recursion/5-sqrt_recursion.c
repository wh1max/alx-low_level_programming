#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt_helper(int n, int start, int end);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return sqrt_helper(n, 0, n);
}

int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start > end)
	{
		return (-1);
	}
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (sqrt_helper(n, start, mid - 1));
	}
	else
	{
		return (sqrt_helper(n, mid + 1, end));
	}
}
