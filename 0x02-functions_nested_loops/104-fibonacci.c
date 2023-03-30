#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned int a = 1, b = 2, c;
	int i = 2

	for (;i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);

		if (i != 97)
		{
			printf(", ");
		}

		else
		{
			printf("\n");
		}
	}
	return (0);
}
