#include "main.h"
/**
 * int _strlen - returns the length of a string
 *@s: string pointer
 */
int _strlen(char *s)
{
	int len;

	while(*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
