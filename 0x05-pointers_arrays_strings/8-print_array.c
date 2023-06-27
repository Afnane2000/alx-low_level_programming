#include "main.h"
/**
 *print_array - function to swap the value
 *
 *@a : parametre pointeur
 *@n : parametre pointeur
 *
 *
 */
void print_array(int *a, int n)
{
	int i;

	while ((i < n) && (*a != '\0'))
	{
		if (i == (n - 1))
			printf("%i\n", *a);
		else
			printf("%i,", *a);
		i++;
		a++;
	}
}
