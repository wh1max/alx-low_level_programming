#include <stdio.h>
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i <= n; i++)
	{

		while(n % i == 0)
		{
			n /= i;
		}

		if (n == 1 || n == i)
		{
			printf("%ld\n", i);
			break;
		}
	}
	return (0);
}
