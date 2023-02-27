#include "main.h"
/**
 * _puts - function prints out a string to stdout
 * @str: paramater for the function _puts
 */
void _puts(char *str)
{
	for ( ; *str ! '\0' ; str++ )
	{
		_putchar(*str);
	}
	_putchar( '\n' );
}
