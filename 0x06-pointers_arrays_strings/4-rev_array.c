#include "main.h"

/**
 * revers_array - reverses the content of an array of integers.
 * @a: pointer to an array
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverde_array(int *a, int n)
{
	int i, j, t;

	for (i = 0; j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
