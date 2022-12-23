#include <stdio.h>
#include <unistd.h>
/**
 * main - print string to the standard error
 *
 * Return: Always retutn 1
 */
int main(void)
{

	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
