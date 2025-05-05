/*
 * 
 * Create a function that takes a pointer to int as a parameter, and sets the value "42" to that int.
 *
 */



#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr){

	*nbr = 42;

}

/*
 int main (){
 	int nbr = 12;
 	ft_ft(&nbr);//adresse du variable
 	printf ("%d",nbr);//affichant la nouvaux valeur du variable apres l'appel du fct
 	return 0;//exit
 }
*/
