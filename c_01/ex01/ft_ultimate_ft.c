/*
 *
 * Create a function that takes a pointer to pointer to pointer to pointer to pointer
 * to pointer to pointer to pointer to pointer to int as a parameter and sets the value
 * "42" to that int.
 *
 */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr){
	
	*********nbr = 42;

}

/*
int 	main (){

	int nbr = 12 ;
	int *a = &nbr ;
	int **b = &a ;
	int ***c = &b ;
	int ****d = &c ;
	int *****e = &d ;
	int ******f = &e ;
	int *******g = &f ;
	int ********h = &g ;
	int *********i = &h ;
	ft_ultimate_ft (i);
	
	printf ("%d",nbr);
	
	return 0;
}
*/
