#include "main.h"
/**
 * _islower - tests whether a character is a
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);

}
