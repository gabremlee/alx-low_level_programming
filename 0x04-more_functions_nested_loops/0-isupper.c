#include "main.h"

/**
 *_isupper - a function to check for uppercase character
 *@c - takes an input of int c
 *Return: 1 if c is uppercase and 0 otherwise
 */ 

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
