#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *result = NULL;
	unsigned int i;
	int count;

	count = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	result = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		result[i] = s2[count];
		count++;
	}
	return (result);
}
