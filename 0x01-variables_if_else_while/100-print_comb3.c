#include <stdio.h>

/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int i;

	{
		for (x = 48; x < 58; x++)
		{
			for (i = 48; i < 58; i++)
			{
				if (i > x)
				{
					putchar(x);
					putchar(i);
					if (x != 56 || i != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
