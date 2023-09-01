#include "main.h"

/**
 *_strlen - function that returns the length of a string.
 * @s: string to be checked
 * Return: The length of string
 */

int _strlen(char *s)
{

int b = 0;

	for (; *s++;)
		b++;
	return (b);
}
