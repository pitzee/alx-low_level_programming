#include <stdio.h>

#include "main.h"

/**		
 *main - mul two number
 *
 *@argc: number of argument
 *@argv: array
 *return: 0 ,1 for error
 */
int main(int argc, char *argv[])
{
	int i, mul = 0;

	if(argc == 2)
	{
		for(i = 1; i < argc; i++)
		{
			mul = mul * _atoi(argv[i]);
			printf("%d\n",mul);
		}
	}
	else
	{
		printf("Error");
	
	}
	return(0);
}
