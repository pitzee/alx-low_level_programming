#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)

{
	print_alphabet();
	return (0);
}
/**
 *print_alphabet - print the alphabet
 */
void print_alphabet(void)

{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
}
