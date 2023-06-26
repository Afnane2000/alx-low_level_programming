#include "main.h"
/**
 *print_rev - function to swap the value
 *
 *
 *@s : parametre pointeur
 *
 */

void print_rev(char *s)
{
	int i = 0, j = 0;

	for (i = 0 ; *s != '\0'; s++)
		i++;
	s--;

	for (j = i ; j != 0 ; s--)
	{
		_putchar(*s + 0);
		j--;
	}
	_putchar('\n');
}
