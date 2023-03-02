#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @dest: string to be concatenated
 * @src: string to append
 * @n: no of bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
