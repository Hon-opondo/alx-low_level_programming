#include "main.h"
/**
 * print_array - prints the "n" elemet of a array
 * @a: array pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;
	for (n--; n >= 0; n--, b++)
	{
		_putchar(a[b]);
		if (n > 0)
		{
			_putchar(', ');
		}
	}
	_putchar('\n');
}
