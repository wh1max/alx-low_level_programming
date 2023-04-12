#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *result = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	strcpy(result, s1);
	strcpy(result, s2);

	return (result);
}
