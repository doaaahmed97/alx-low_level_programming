#include <stdio.h>

/**
 * main - num9
 *
 * Return: alway 0
 */

int main(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		putchar(t + '0');
		if (t < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
