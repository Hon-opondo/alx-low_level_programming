#include "main.h"
/**
 * _strncpy - copies n bytes in a string
 * @dest: duplicate
 * @src: string to be copied
 * @n: bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	for ( ; b < n; b++)
	dest[a + b] = '\0';
	return (dest);
}
