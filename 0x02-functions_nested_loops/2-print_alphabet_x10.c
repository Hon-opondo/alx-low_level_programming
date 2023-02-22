#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabet letters 10 times
 *
 */
void print_alphabet_x10(void)
{
	char b;
	int d;

	d = 0;
	while (d < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		d++;
	}
}
