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

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
