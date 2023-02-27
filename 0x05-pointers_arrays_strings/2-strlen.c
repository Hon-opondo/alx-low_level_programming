#include "main.h"
/**
 * int _strlen - returns the length of a string
 *@s: string pointer
 */
int _strlen(char *s)
{
	int len;

	while(; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
