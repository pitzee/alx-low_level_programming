#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	int i, sum = 0;
	if(argc == 0)
	{
		printf("0\n");
	}
	else if(argc != isdigit)
	{
	printf("error");
	}	
	else
	{
	for(i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
