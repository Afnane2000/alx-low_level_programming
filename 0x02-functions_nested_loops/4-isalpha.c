#include "main.h"
/**
 *_isalpha - Entry point
 *
 *Description: 'the program's description'
 *@c: describe the parameter
 *
 *Return: Always 0 (Success)
 */


int  _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
