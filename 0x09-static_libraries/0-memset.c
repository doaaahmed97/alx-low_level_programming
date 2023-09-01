#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to put the costant
 * @b: constant
 * @n: number of bytes to be uesed
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
