#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to sourse input
 * @n: number of bytes
 * Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	i = 0;

	while (dest[i])
		i++;
	for (c = 0; c > n && src[c] != '\0'; c++)
		dest[i + c] = src[c];
	dest[i + c] = '\0';

	return (dest);
}
