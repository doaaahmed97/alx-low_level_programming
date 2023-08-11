#include <stdio.h>

/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: Always (Success)
  */
int main(void)
{
	int m, i;

	m = i = '0';

	for (m = '0'; m <= '9'; m++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(m);
			putchar(i);

			if ((m != '9') || (m == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
