#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * Owned by Bwave
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < n; w++)
		if (w != n - 1)
		printf("%d, ", a[w]);
		else
			printf("%d", a[w]);
printf("\n");
}
