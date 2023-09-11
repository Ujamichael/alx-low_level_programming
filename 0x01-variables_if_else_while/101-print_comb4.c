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
	int m;

	{
		for (x = 48; x < 58; x++)
		{
			for (i = 49; i < 58; i++)
			{
				for (m = 50; m < 58; m++)
				{
					if (m > i && i > x)
					{
						putchar(x);
						putchar(i);
						putchar(m);
						if (x != 55 || i != 56)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

