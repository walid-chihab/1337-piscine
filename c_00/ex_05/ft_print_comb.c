/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
/* 			        	                        	*/
/*   deux    meme			            :=:      ::::::::   */
/*  fct avec  des				  :+://     :+:   :+:   */
/* deffirent code				+:+ +:+         +:+     */
/*					      +#+  +:+        +#+       */
/*					    +#+#+#+#+#+     +#+         */
/*					          #+#     #+#           */
/*					         ###    w#a#l#i#d.ma    */
/*					                                */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/


#include <unistd.h>



#include <unistd.h>


void    ft_print_comb (void )
{
    int  i,j,k;

    j  =  i+1;
    for (   i=0  ;  i<8  ;  i++)
    {
        int k = j+1 ;
        for (  j=i+1  ;  j<9  ;  j++)
        {
            for(  k=j+1  ;  k<10  ;  k++)
            {
                char c1 = i + '0';//converte the char to numbre
                char c2 = j + '0';
                char c3 = k + '0';

                write( 1, &c1, 1);
                write( 1, &c2, 1);
                write( 1, &c3, 1);
                if (i != 7 || j != 8 || k != 9)
                    write(1,", ",2);
            }
        }
    }
}
