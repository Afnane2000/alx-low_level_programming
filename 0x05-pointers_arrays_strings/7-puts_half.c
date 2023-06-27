#include "main.h"
/**
 *puts_half - function to swap the value
 *
 *
 *@str : parametre pointeur
 *
 *
 */
void puts_half(char *str)
{
int l, i;

	for (l = 0 ; str[l] != '\0' ; l++)
		;
	if (l % 2 == 1)
	{
		l++;
	}
	for (i = l / 2 ; str[i] != '\0' ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
