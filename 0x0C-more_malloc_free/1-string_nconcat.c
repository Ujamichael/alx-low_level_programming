#include "main.h"
#include <stdlib.h>
/**
 * st_len - entry point of support function
 * @str: string
 * Return: 0
 */
unsigned int st_len(char *str)
{
	unsigned int len;

	if (str == NULL)
		return (0);
	len = 0;

	while (str[len] !=  '\0')
	{
		len++;
	}
	return (len);
}
/**
 * string_nconcat - entry point
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, i, j;

	if (s1 == NULL)
		s1 = " ";
	s1_len = st_len(s1);
	s2_len = st_len(s2);

	if (n >= s2_len)
		n = s2_len;
	result = malloc(s1_len + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		result[i] = s2[j];
	}
	result[i] = '\0';
	return (result);
}
