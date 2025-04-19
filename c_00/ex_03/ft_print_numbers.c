/************************************************************* 
 * une fct qui _ecrire _les nombre dapres ces nombres 	     *
 * ascii						     *
 *                                                           *
 *************************************************************/

#include <unistd.h> // pour utiliser la fonction write

void	t_print_numbers ( void )
{
	int c = 48;
	
	while ( c <= 57)
	{
		write ( 1, &c , 1);//cette fct trait les caractere danc va affich le caractere qui contient la val c dans 'ASCII TABLE'
		c++;
	}
}
