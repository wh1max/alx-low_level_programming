#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Check if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int last_digit;
	char string[] = "Last digit";
	srand(time (0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("%s of %d is %d and is ", string, n, last_digit);
	/* your code goes there */
	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
