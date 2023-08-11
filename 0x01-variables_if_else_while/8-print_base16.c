#include <stdio.h>

/**
 * main - numer 3
 *
 * Return: always 0
 */
int main(void)
{
	int e;
	char r;

	for (e = 0; e < 10; e++)
	putchar(e + '0');
	for (r = 'a'; r <= 'f'; r++)
	putchar(r);
	putchar('\n');
	return (0);
}
