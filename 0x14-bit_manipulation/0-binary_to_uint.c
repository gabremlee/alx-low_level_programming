#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <stdbool.h>

/**
 *check - function to check for characters other than 1 or 0
 *@c: string to search from
 *Return: True if only 1 and 0 present else false
 **/

bool check( const char *c)
{
        while( *c != '\0')
        {
                if( *c != '1')
                {
                        if( *c != '0')
                        {
                                return 0;
                        }
                }
                *c++;
        }

        return 1;
}

/**
 *len - function to get length of string
 *@p: string to process
 *Return: length of string
 */

int len( const char *p)
{
        int a = 0;

        while( *p != '\0')
        {
                a++;
                *p++;
        }

        return a;
}

/**
 *power - function to calculate power of any number
 *@a: base number to calculate its power
 *@b: number to raise the base to
 *Return: power calculated
 */

int power( int a, int b)
{
        int sum;
        if( b > 0)
        {
                sum = a;
        }else
        {
                sum = 1;
        }

        while( b > 1)
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


unsigned int binary_to_uint( const char *b)
{

        unsigned int dec = 0;

        if(*b == NULL)
        {
                return 0;
        }


        if( !(check(b)) )
        {
                return 0;
        }


        int a = len(b)-1;



 	while( *b != '\0' )
        {
                if(*b == '1')
                {
                        dec += power(2,a);
                }

                *b++;
                a--;
        }

        return dec;
}
