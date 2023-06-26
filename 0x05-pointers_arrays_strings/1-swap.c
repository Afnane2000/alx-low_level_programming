#include "main.h"
/**
 *swap_int - function to swap the value
 *
 *
 *@a : parametre pointeur
 *
 *@b : parametre pointeur
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
