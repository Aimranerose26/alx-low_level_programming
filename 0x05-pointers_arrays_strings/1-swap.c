#include "main.h"

/* swap -  function that swaps 
 * the values of two integers.
 * @a: pointer to the variable to swap
 * @b: pointer to the variable to swap
 */
void swap_int(int *a, int *b){
	int c ;

	c = *b;
	*b = *a;
	*a = c;
}
