#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long current = 0, next = 1, temp;
	int i = 2;

	printf("%lu, %lu, ", current, next);

	for (; i < 50; i++)
	{
		temp = next;
		next += current;
		current = temp;
		printf("%lu", next);
		if (i != 49)
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
