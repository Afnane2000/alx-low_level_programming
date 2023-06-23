#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *
 *Description: 'the program's description'
 *@void: describe the parameter
 *
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int c;
	int i;

for (i = 1 ; i < 11 ; i++)
{
	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}
}
