#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char al;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
