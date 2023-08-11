#include <stdio.h>

/**
 * main - num9
 *
 * Return: alway 0
 */

int main(void)
{
	int t;

	for (t = 0; t < 10; t++)
	{
		if (t == 9)
			putchar(t + '0');
		else
		{
			putchar(t + '0');
			putchar(',');
			putchar(' ');
		}
	}
		return (0);
}
