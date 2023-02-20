#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * except for letters e and q
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 101 || a == 113)
		{
			n++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
