#include "main.h"
#include <ctype>
/**
 * string_toupper - converts all lowercasae to uppercase
 * @b: string
 * Return: uppercase string
 */
char *string_toupper(char *b)
{
	int a = 0;

	while (b[a])
	{
		b[a] = toupper(b[a]);
		a++;
	}
	return (b);
}
