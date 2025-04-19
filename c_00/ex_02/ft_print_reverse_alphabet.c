/**
 *
 * Sa fonction est d’afficher les lettres de l’alphabet dans l’ordre inverse, de z jusqu’à a, 
 *en utilisant la fonction write de la bibliothèque unistd.h.
 *
 **/


#include <unistd.h>

void	ft_print_reverse_alphabet ( void )
{
	char c = 'z';

	while ( c >= 'a' )
	{
		write ( 1, &c, 1);
		c--;
	}
}	
