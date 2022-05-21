#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int (*opera)(int,int);

	if(argc < 4 || argc > 4)
		printf("Error\n");
		return(98);
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	
	opera = get_op_func(argv[2]);

	int c = opera(a, b);

	printf("%d",c);

	return(0);
}	
