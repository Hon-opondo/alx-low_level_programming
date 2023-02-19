#include <stdio.h>
/**
 * main -  program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0 (success)
 */
it main(void)
{
	int b;
	char a;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu byte(s)\n", (unassigned long)sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unassigned long)sizeof(b));
	printf("Size of long int: %lu byte(s)\n", (unassigned long)sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", (unassigned long)sizeof(d));
	printf("Size of float: %lu byte(s)\n", (unassigned long)sizeof(f));
	return (0);
}
