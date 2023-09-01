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
	int d, s;

	d = 0;
	s = 0;

	while (*(dest + d) != '\0')
		d++;

	while (*(src + s) != '\0' && d < 97 && s < n)
	{
		*(dest + d) = *(src + s);
		d++;
		s++;
	}
	*(dest + d) = '\0';
	return (dest);
}
