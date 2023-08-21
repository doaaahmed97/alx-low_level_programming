#include "main.h"

/**
* print_rev - printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int h, c;

	c = 0;
	while (s[c] != '\0')
		c++;

	for (h = c - 1; h >= 0; h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}
