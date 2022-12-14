#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
	char al;
	int le;

	for (le = 1; le <= 10; le++)
	{
	for (al = 'a'; al <= 'z'; al++)
	{
	_putchar(al);
	}
	_putchar('\n');
	}
}
