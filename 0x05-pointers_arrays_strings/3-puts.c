#include "main.h"
/**
 *_puts - function to swap the value
 *
 *
 *@str : parametre pointeur
 *
 *
 */


void _puts(char *str)
{
	int i;

	for (i = 0 ; *str != '\0'; str++)
		_putchar(*str);
_putchar('\n');
}

