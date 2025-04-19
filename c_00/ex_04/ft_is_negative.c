/*******************************************************************
 * on suppose que 0 positive et  on faite une fct avec type	   *
 * de reture vide puis nos instructions	                           *
 *******************************************************************/

#include <unistd.h>

//supposant que 0 est positive
void	ft_is_negative( int n )
{
	if ( n<0 )
		write( 1, "N", 1);
	else 
		write( 1, "P", 1);
}

