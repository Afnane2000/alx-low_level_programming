#include "main.h"
/**
 *_islower - Entry point
 *
 *Description: 'the program's description'
 *@c: describe the parameter
 *
 *Return: Always 0 (Success)
 */


int  _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
