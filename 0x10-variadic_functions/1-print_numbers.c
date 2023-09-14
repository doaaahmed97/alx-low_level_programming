#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that returns the sum of all its parameters.
 *@separator: pointer to a character string that will be used
 *@n: The number of integers
 * Return: always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	int num = va_arg(args, int);

	printf("%d", num);

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	}

	va_end(args);

	printf("\n");
}
