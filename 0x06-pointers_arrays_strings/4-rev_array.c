#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: integers in array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int c, d;

	for (c = 0; c < n / 2; c++)
	{
		d = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = d;
	}
}
