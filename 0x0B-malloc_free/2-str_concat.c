#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - entry point
 * @s1: first string
 * @s2: second string
 * Return: strcat of both string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (result != NULL)
	{
		strcpy(result, s1);
		strcat(result, s2);

		return (result);
	}
	else
	{
		return (NULL);
	}
}
