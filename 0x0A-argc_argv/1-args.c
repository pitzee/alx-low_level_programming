#include <stdio.h>

#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */



int main(int argc, char *argv[]__attribute__((unused)))

{
	
	int i;
	for(i = 0; i < argc; i++)
	{
	printf("%d\n", argc);
	}

	return (0);
}
