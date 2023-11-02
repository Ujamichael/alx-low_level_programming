#include "main.h"
#include <stdio.h>
/**
 * st_len - entry point of support function
 * @str: string
 * Return: 0
 */
unsigned int st_len(char *str)
{
	if (str == NULL)
		return (0);
	unsigned int len = 0;
	
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
	if (s1 == NULL)
		s1 = " ";
	unsigned int s1_len = st_len(s1);
	unsigned int s2_len = st_len(s2);

	if (n >= s2_len)
		n = s2_len;

	char *result = malloc(s1_len + n + 1);

	if (result == NULL)
		return(NULL);

	unsigned int i, j;

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
