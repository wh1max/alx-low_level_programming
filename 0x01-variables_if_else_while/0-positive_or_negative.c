#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * 
 * Description: 'This Function creates a random number for the varaible n each it is executed.Then prints whether the    number stored in the variable n is positive or negative or equal to zero.'
 
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	} 
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
