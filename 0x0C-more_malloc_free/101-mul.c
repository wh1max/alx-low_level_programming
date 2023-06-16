#include <stdio.h>
#include <stdlib.h>
/**
 * error_exit - Print an error message and exit with status 98
 */
void error_exit(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * is_digit - Check if a character is a digit
 * @c: The character to check
 * Return: 1 if the character is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * multiply - Multiply two positive numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * This function multiplies two positive numbers and prints the result.
 * The numbers are passed as strings in base 10.
 * If the number of arguments is incorrect
 * or the numbers contain non-digit characters,
 * an error message is printed, and the program exits with a status of 98.
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k;
	int *result;
	int carry, n1, n2, sum;

	while (num1[len1] != '\0')
		++len1;
	while (num2[len2] != '\0')
		++len2;
	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		error_exit();

	for (i = len1 - 1; i >= 0; i--)
	{
		if (!is_digit(num1[i]))
			error_exit();
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; --j)
		{
			if (!is_digit(num2[j]))
				error_exit();
			n2 = num2[j] - '0';
		sum = n1 * n2 + result[i + j + 1] + carry;
		carry = sum / 10;
		result[i + j + 1] = sum % 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}
	i = 0;
	while (i < len1 + len2 - 1 && result[i] == 0)
		i++;
	for (k = i; k < len1 + len2; k++)
		printf("%d", result[k]);
	printf("\n");
	free(result);
}
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit();
	multiply(argv[1], argv[2]);
	return (0);
}
