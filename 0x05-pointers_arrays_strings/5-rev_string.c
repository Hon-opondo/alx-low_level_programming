#include "main.h"
/**
 * rev_string - function reversesa string
 * @s: parameter to be reversed
 */
void rev_string(char *s)
{
	int a, b, c;
	char d;

	for (a = 0; s[a] != '\0'; a++)
		;
	c = a;

	for (a--, c = 0; b < c / 2; a--, b++)
	{
		d = s[b];
		s[b] = s[a];
		s[a] = d;
	}
}
