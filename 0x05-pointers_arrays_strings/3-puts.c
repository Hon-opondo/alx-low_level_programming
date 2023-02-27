#include "main.h"
/**
 * _puts - function prints out a string to stdout
 * @str: paramater for the function _puts
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (str [a] != '\0')
	{
		_putchar(*str);
	}
	_putchar( '\n' );
}
