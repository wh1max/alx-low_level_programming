#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	int i;

	for (i = 1; i * i <= n; i++)
		;

	if (n == 0 || n == 1)
		return (n);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (_sqrt_recursion(n - (i - 1) * (i - 1)));
	return (-1);
}
