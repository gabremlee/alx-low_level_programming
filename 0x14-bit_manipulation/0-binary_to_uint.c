#include "main.h"

/**
 *len - function to get length of string
 *@p: string to process
 *Return: length of string
 */

int len(char *p)
{
        int a = 0;

        while(*p != '\0')
        {
                a++;
                *p++;
        }

        return (a);
}

/**
 *power - function to calculate power of any number
 *@a: base number to calculate its power
 *@b: number to raise the base to
 *Return: power calculated
 */

int power(int a, int b)
{
        int sum;
        if(b > 0)
        {
                sum = a;
        }else
        {
                sum = 1;
        }

        while(b > 1)
        {
                sum *= a;
                b--;
        }

        return sum;
}

/**
 *binary_to_int - function to convert string binary to unsigned int decimal
 *@b: string to process
 *Return: Decimal equivalent of binary
 */

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, a;
	if(*b == NULL)
		exit(0);
	
	while(*b != '\0')
	{
		if(*b != '1' || *b != '0')
			exit(0);

	}

	int a = len(b)-1;

	


        while(*b != '\0')
        {
                if(*b == '1')
                {
                        dec += power(2,a);
                }

                *p++;
                a--;
        }

        return dec;

