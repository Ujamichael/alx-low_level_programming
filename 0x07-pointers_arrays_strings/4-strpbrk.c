#include "main.h"

/**
* _strpbrk - search a string for any of a set of byte
* @s: string
* @accept: second string
* Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
int copy = 0, i, m = 0, n = 0;

while (*(s + copy) != '\0')
{
for (i = 0; *(accept + i) != '\0'; i++)
{
if (*(s + copy) == *(accept + i))
{
m = 1;
n = copy;
break;
}
}
if (m == 1)
{
break;
}
copy++;
}

if (n == 0)
{
return ('\0');
}
else
{
return (s + n);
}
}
