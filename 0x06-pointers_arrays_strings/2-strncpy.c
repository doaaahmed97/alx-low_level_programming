#include "main.h"

/**
 * _strncpy - function that copies a string.
 *@dest: pointer for destination input
 *@src: pointer for source input
 *@n: bytes of source
 *Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	while (n > 0)
	{
	*dest = '\0';
	dest++;
	n--;
	}

	return (dest);
}

