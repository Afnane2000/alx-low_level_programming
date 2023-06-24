#include "main.h"
/**
 *jack_bauer - fonction
 *
 *
 *
 *Return : retourne 0
 *
 */
void jack_bauer(void)

{
	int i, j;

	for (j = 0 ; j < 25 ; j++)
		for (i = 0 ; i < 60 ; i++)
			printf("%.2d:%.2d\n", j, i);

}
