#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: string parameter
 */
void puts2(char *str)
{
	int e;

	for (e = 0; str[e] != '\0'; e++)
	{
		if (e % 2 == 0)
		{
			_putchar(str[e]);
		}
	}
	_ptchar('\n');
}
