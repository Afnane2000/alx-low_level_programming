#include "main.h"
/**
 *print_last_digit - affiche last digit
 *
 *@i : variable local
 *
 *Return: returne valeur
 *
 */
int print_last_digit(int i)
{
	int r;

	r = abs(i % 10);
	_putchar('0' + r);
	return (r);
}
